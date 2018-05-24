
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

 ACCESSORS(QList<PSI_Carrier> ,carriers)

 PSI_Signature();


};

_APDLNS(RefI)


#endif
