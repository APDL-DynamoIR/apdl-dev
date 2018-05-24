
#ifndef KERNEL_BRIDGE_INTERFACE__H
#define KERNEL_BRIDGE_INTERFACE__H

#include "apdlns.h"

#include "accessors.h"

#include <QList>

#include "kernel-interface-base.h"

APDLNS_(RefI)

class PSI_Signature;


class Kernel_Bridge_Interface : public Kernel_Interface_Base
{

public:

 Kernel_Bridge_Interface();

};

_APDLNS(RefI)


#endif
