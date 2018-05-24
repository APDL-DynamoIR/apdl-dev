
#ifndef APDL_BASIC_APPLICATION__H
#define APDL_BASIC_APPLICATION__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>

APDLNS_(RefI)

class APDL_Basic_Application
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

 void supply_data(QByteArray& qba) const;



};

_APDLNS(RefI)


#endif
