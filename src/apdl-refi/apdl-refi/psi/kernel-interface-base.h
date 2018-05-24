
#ifndef KERNEL_INTERFACE_BASE__H
#define KERNEL_INTERFACE_BASE__H

#include "apdlns.h"

#include "accessors.h"

#include <QList>


APDLNS_(RefI)

class PSI_Signature;


class Kernel_Interface_Base
{
 QList<PSI_Signature*> values_;
 QString description_;

public:

 ACCESSORS(QString ,description)
 ACCESSORS__RGET(QList<PSI_Signature*> ,values)

 Kernel_Interface_Base();

};

_APDLNS(RefI)


#endif
