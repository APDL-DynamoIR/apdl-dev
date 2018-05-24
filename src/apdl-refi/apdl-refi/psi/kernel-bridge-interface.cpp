
#include "kernel-bridge-interface.h"

#include "apdlns.h"

#include <QDataStream>


USING_APDLNS(RefI)


Kernel_Bridge_Interface::Kernel_Bridge_Interface()
  :  Kernel_Interface_Base()
{

}


void Kernel_Bridge_Interface::supply_data(QByteArray& qba) const
{
 Kernel_Interface_Base::supply_data(qba);
}

void Kernel_Bridge_Interface::absorb_data(QDataStream& qds, Kernel_Bridge_Interface& _this)
{
 qds >> _this.description_;
 qds >> _this.representation_;
 QString enc;
 qds >> enc;

 _this.read_from_encoding(enc);

}
