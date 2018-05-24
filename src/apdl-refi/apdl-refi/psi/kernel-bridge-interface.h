
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
 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;

 static void absorb_data(QDataStream& qds, Kernel_Bridge_Interface& _this);
 friend void operator>>(QDataStream& qds, Kernel_Bridge_Interface& _this)
 {
  Kernel_Bridge_Interface::absorb_data(qds, _this);
 }

};

_APDLNS(RefI)


#endif
