
#include <QApplication>
#include <QFileDialog>
#include <QDebug>


#include "textio.h"

#include "apdlns.h"

#include "apdl-refi/apdl-refi/apdl-refi.h"
#include "apdl-refi/apdl-refi/apdl-basic-application.h"
#include "apdl-refi/apdl-refi/deployment/apdl-repository-info.h"

#include "base32.h"


USING_APDLNS(RefI)
USING_APDLNS(TextIO)
USING_APDLNS(Base32)

int main(int argc, char *argv[])
{
 QApplication qapp(argc, argv);

 QString path = QFileDialog::getOpenFileName(nullptr,
   "Open APDL File");

 qDebug() << "Path: " << path;

 QString text = load_file(path);

 qDebug() << "File text: \n========\n" << text
   << "\n--------\n";

 QByteArray qba;

 decode_qstring(text, qba);

 APDL_Refi ari;

 ari.absorb_data(qba);

 qDebug() << "test1: " << ari.basic_application_info()->name();
 qDebug() << "test1: " << ari.repository_info()->url();

 QString report;
 ari.supply_report(report);

 qDebug() << "REPORT: \n========\n\n" << report << "\n\n--------";

 QString save_path = QFileDialog::getSaveFileName(nullptr,
   "(OPTIONAL) Save Report:");

 if(!save_path.isEmpty())
 {
  save_file(save_path, report);
 }

 return 0;

}
