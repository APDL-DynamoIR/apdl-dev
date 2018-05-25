
#include "kernel-interface-base.h"

#include "apdl-refi_op.h"

#include "apdlns.h"

#include "channels/psi-signature.h"

USING_APDLNS(RefI)

Kernel_Interface_Base::Kernel_Interface_Base()
{

}

void Kernel_Interface_Base::get_string_encoding(QString& outparam) const
{
 outparam = representation_;
}

int Kernel_Interface_Base::read_from_encoding(QString enc)
{
 return -1;
}

void Kernel_Interface_Base::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);
}

void Kernel_Interface_Base::supply_data(QDataStream& qds) const
{
 qds << description_;
 qds << representation_;

 QString enc;
 get_string_encoding(enc);
 qds << enc;

 qds << values_.size();
 for(PSI_Signature* s :  values_)
 {
  qds << *s;
 }
}


void Kernel_Interface_Base::supply_report(QTextStream& qts) const
{
 qts << "\n Description: " << description_;
 qts << "\n Representation: " << representation_;

 QString enc;
 get_string_encoding(enc);
 qts << "\n Encoding: " << enc;
 qts << "\n Values Size: " << values_.size();
}
