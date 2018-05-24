
#include "kernel-component-interface.h"

#include "apdlns.h"

USING_APDLNS(RefI)

Kernel_Component_Interface::Kernel_Component_Interface()
 :  Kernel_Interface_Base()
{

}

void Kernel_Component_Interface::supply_data(QByteArray& qba) const
{
 Kernel_Interface_Base::supply_data(qba);
}
