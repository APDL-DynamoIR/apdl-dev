
#ifndef PSI_TYPE_EXPRESSION__H
#define PSI_TYPE_EXPRESSION__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>

APDLNS_(RefI)

class PSI_Type_Expression
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
