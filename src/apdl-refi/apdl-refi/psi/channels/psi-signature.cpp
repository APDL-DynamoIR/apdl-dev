
#include "psi-signature.h"

#include "apdl-refi_op.h"

#include "apdlns.h"

USING_APDLNS(RefI)


PSI_Signature::PSI_Signature()
{

}

void PSI_Signature::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);
}

void PSI_Signature::supply_data(QDataStream& qds) const
{
 qds << carriers_;
}

void PSI_Signature::absorb_data(QDataStream& qds, PSI_Signature& _this)
{
 qds >> _this.carriers_;
}
