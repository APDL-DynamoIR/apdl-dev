
#ifndef KERNEL_SERVICE_INTERFACE__H
#define KERNEL_SERVICE_INTERFACE__H

#include "apdlns.h"

#include "accessors.h"

#include <QList>

#include "kernel-interface-base.h"

APDLNS_(RefI)

class PSI_Signature;


class Kernel_Service_Interface : public Kernel_Interface_Base
{

public:

 Kernel_Service_Interface();
 void supply_data(QByteArray& qba) const;


};

_APDLNS(RefI)


#endif
