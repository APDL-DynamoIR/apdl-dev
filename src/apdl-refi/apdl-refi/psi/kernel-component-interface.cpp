
#include "kernel-component-interface.h"
#include "apdl-refi.h"


#include "apdlns.h"

USING_APDLNS(RefI)

Kernel_Component_Interface::Kernel_Component_Interface()
 :  Kernel_Interface_Base()
{

}

void Kernel_Component_Interface::supply_data(QDataStream& qds) const
{
 Kernel_Interface_Base::supply_data(qds);
}

void Kernel_Component_Interface::supply_data(QByteArray& qba) const
{
 Kernel_Interface_Base::supply_data(qba);
}

void Kernel_Component_Interface::absorb_data(QDataStream& qds, Kernel_Component_Interface& _this)
{
 qds >> _this.description_;
 qds >> _this.representation_;
 QString enc;
 qds >> enc;
 _this.read_from_encoding(enc);

}



