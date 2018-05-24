
#include "kernel-service-interface.h"

#include "apdlns.h"

USING_APDLNS(RefI)

Kernel_Service_Interface::Kernel_Service_Interface()
 : Kernel_Interface_Base()
{

}

void Kernel_Service_Interface::supply_data(QByteArray& qba) const
{
 Kernel_Interface_Base::supply_data(qba);
}

