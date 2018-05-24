
#include "kernel-interface-base.h"

#include "apdlns.h"

USING_APDLNS(RefI)

Kernel_Interface_Base::Kernel_Interface_Base()
{

}

void Kernel_Interface_Base::get_string_encoding(QString& outparam) const
{
 outparam = representation_;
}

void Kernel_Interface_Base::read_from_encoding(QString enc)
{

}

void Kernel_Interface_Base::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 qds << description_;
 qds << representation_;

 QString enc;
 get_string_encoding(enc);
 qds << enc;
}
