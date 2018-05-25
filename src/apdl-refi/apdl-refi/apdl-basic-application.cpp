
#include "apdl-basic-application.h"

#include "apdlns.h"

#include <QDataStream>

USING_APDLNS(RefI)


APDL_Basic_Application::APDL_Basic_Application()
{

}

void APDL_Basic_Application::set_version_string(unsigned maj, unsigned min, unsigned patch)
{
 set_version_string(QString("%1.%2.%3").arg(maj).arg(min).arg(patch));
}

void APDL_Basic_Application::supply_report(QTextStream& qts) const
{
 qts << "\nAPDL_Basic_Application ... ";
 qts << "\n Name: " << name_;
 qts << "\n Version String: " << version_string_;
 qts << "\n Description: " << description_;
}

void APDL_Basic_Application::supply_data(QDataStream& qds) const
{
 qds << name_;
 qds << version_string_;
 qds << description_;
}

void APDL_Basic_Application::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);
}


void APDL_Basic_Application::absorb_data(QDataStream& qds, APDL_Basic_Application& _this)
{
 qds >> _this.name_;
 qds >> _this.version_string_;
 qds >> _this.description_;
}

