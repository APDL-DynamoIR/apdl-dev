
#include <QApplication>
#include <QFileDialog>
#include <QDebug>


#include "textio.h"

#include "apdlns.h"



//USING_APDLNS(RefI)
USING_APDLNS(TextIO)

int main(int argc, char *argv[])
{
 QApplication qapp(argc, argv);

 QString path = QFileDialog::getOpenFileName(nullptr,
   "Open APDL File");

 qDebug() << "Path: " << path;

 QString text = load_file(path);

 qDebug() << "File text: \n========\n" << text
   << "\n--------\n";

 qapp.exec();

}
