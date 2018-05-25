
#ifndef KERNEL_INTERFACE_BASE__H
#define KERNEL_INTERFACE_BASE__H

#include "apdlns.h"

#include "accessors.h"

#include <QList>


APDLNS_(RefI)

class PSI_Signature;


class Kernel_Interface_Base
{
protected:

 QList<PSI_Signature*> values_;
 QString description_;

 QString representation_;

 virtual void get_string_encoding(QString& outparam) const;
 virtual int read_from_encoding(QString enc);

public:

 ACCESSORS(QString ,description)
 ACCESSORS__RGET(QList<PSI_Signature*> ,values)
 ACCESSORS(QString ,representation)


 Kernel_Interface_Base();
 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;


};

_APDLNS(RefI)


#endif
