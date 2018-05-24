
#ifndef PSI_SIGNATURE__H
#define PSI_SIGNATURE__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>
#include <QList>

#include "psi-carrier.h"


APDLNS_(RefI)

class PSI_Signature
{
 QList<PSI_Carrier> carriers_;

public:

 ACCESSORS__RGET(QList<PSI_Carrier> ,carriers)

 PSI_Signature();

 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;



};

_APDLNS(RefI)


#endif
