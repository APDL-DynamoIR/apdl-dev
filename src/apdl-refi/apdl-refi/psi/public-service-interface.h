
#ifndef PUBLIC_SERVICE_INTERFACE__H
#define PUBLIC_SERVICE_INTERFACE__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>

#include "kernel-bridge-interface.h"
#include "kernel-service-interface.h"
#include "kernel-component-interface.h"


APDLNS_(RefI)


class Public_Service_Interface
{
 Kernel_Service_Interface ksi_;
 Kernel_Bridge_Interface kbi_;
 Kernel_Component_Interface kci_;

 QString description_;

public:

 ACCESSORS(QString ,description)

 ACCESSORS__RGET(Kernel_Service_Interface ,ksi)
 ACCESSORS__RGET(Kernel_Bridge_Interface ,kbi)
 ACCESSORS__RGET(Kernel_Component_Interface ,kci)

 Public_Service_Interface();


};

_APDLNS(RefI)


#endif
