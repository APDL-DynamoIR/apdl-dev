
#ifndef PSI_TYPE_EXPRESSION__H
#define PSI_TYPE_EXPRESSION__H

#include "apdlns.h"

#include "accessors.h"

#include "psi-signature.h"

#include <QString>
#include <QTextStream>

APDLNS_(RefI)

class PSI_Type_Expression
{
 QString symbol_;
 PSI_Signature signature_;

public:

 PSI_Type_Expression();

 ACCESSORS(QString ,symbol)
 ACCESSORS__RGET(PSI_Signature ,signature)

 void supply_report(QTextStream& qts) const;
 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;

 void absorb_data(const QByteArray& qba);

 static void absorb_data(QDataStream& qds, PSI_Type_Expression& _this);
 friend void operator>>(QDataStream& qds, PSI_Type_Expression& _this)
 {
  PSI_Type_Expression::absorb_data(qds, _this);
 }


};

_APDLNS(RefI)


#endif
