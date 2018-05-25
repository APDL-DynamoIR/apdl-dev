
#include "kernel-service-interface.h"

#include "apdlns.h"

USING_APDLNS(RefI)

Kernel_Service_Interface::Kernel_Service_Interface()
 : Kernel_Interface_Base()
{

}

void Kernel_Service_Interface::supply_report(QTextStream& qts) const
{
 qts << "\nKernel_Service_Interface ... ";
 Kernel_Interface_Base::supply_report(qts);
}

void Kernel_Service_Interface::supply_data(QDataStream& qds) const
{
 Kernel_Interface_Base::supply_data(qds);
}

void Kernel_Service_Interface::supply_data(QByteArray& qba) const
{
 Kernel_Interface_Base::supply_data(qba);
}

void Kernel_Service_Interface::absorb_data(QDataStream& qds, Kernel_Service_Interface& _this)
{
 qds >> _this.description_;
 qds >> _this.representation_;
 QString enc;
 qds >> enc;

 _this.read_from_encoding(enc);
}

