
#ifndef PSI_SIGNATURE__H
#define PSI_SIGNATURE__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>

APDLNS_(RefI)

class PSI_Signature
{
 QString name_;
 QString version_string_;
 QString description_;

public:

 ACCESSORS(QString ,name)
 ACCESSORS(QString ,version_string)
 ACCESSORS(QString ,description)

 APDL_Basic_Application();

 void set_version_string(unsigned maj, unsigned min, unsigned patch = 0);




};

_APDLNS(RefI)


#endif
