
#include "psi-type-expression.h"

#include "apdl-refi_op.h"

#include "apdlns.h"

USING_APDLNS(RefI)

PSI_Type_Expression::PSI_Type_Expression()
{

}

void PSI_Type_Expression::absorb_data(const QByteArray& qba)
{
 QDataStream qds(qba);
 absorb_data(qds, *this);
}

void PSI_Type_Expression::supply_report(QTextStream& qts) const
{

}

void PSI_Type_Expression::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);
}

void PSI_Type_Expression::supply_data(QDataStream& qds) const
{
 qds << symbol_;
 qds << signature_;
}

void PSI_Type_Expression::absorb_data(QDataStream& qds, PSI_Type_Expression& _this)
{
 qds >> _this.symbol_;
 qds >> _this.signature_;
}

