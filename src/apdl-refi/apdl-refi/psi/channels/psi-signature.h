
#ifndef PSI_SIGNATURE__H
#define PSI_SIGNATURE__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>
#include <QList>
#include <QTextStream>

#include "psi-carrier.h"


APDLNS_(RefI)

class PSI_Signature
{
 QList<PSI_Carrier> carriers_;

public:

 ACCESSORS__RGET(QList<PSI_Carrier> ,carriers)

 PSI_Signature();

 void supply_report(QTextStream& qts) const;
 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;

 static void absorb_data(QDataStream& qds, PSI_Signature& _this);
 friend void operator>>(QDataStream& qds, PSI_Signature& _this)
 {
  PSI_Signature::absorb_data(qds, _this);
 }

};

_APDLNS(RefI)


#endif
