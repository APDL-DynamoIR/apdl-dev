
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
