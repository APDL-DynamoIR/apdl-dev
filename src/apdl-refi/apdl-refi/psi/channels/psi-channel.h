
#ifndef PSI_CHANNEL__H
#define PSI_CHANNEL__H

#include "apdlns.h"

#include "accessors.h"

#include "psi-carrier.h"

#include <QList>

APDLNS_(RefI)

class PSI_Channel
{
 QString kind_;

 QList<PSI_Carrier> carriers_;

public:

 ACCESSORS(QString ,kind)
 ACCESSORS__RGET(QList<PSI_Carrier> ,carriers)

 PSI_Channel();


};

_APDLNS(RefI)


#endif
