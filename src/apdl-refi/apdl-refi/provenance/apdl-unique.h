
#ifndef APDL_UNIQUE__H
#define APDL_UNIQUE__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>

APDLNS_(RefI)

class APDL_Unique
{
 QString name_;
 QString identifier_;
 QString context_description_;

public:

 ACCESSORS(QString ,name)
 ACCESSORS(QString ,identifier)
 ACCESSORS(QString ,context_description)

 explicit APDL_Unique(QString identifier);

};

_APDLNS(RefI)


#endif
