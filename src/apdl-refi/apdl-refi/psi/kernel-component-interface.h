
#ifndef KERNEL_COMPONENT_INTERFACE__H
#define KERNEL_COMPONENT_INTERFACE__H

#include "apdlns.h"

#include "accessors.h"

#include <QList>
#include <QTextStream>

#include "kernel-interface-base.h"

APDLNS_(RefI)

class PSI_Signature;


class Kernel_Component_Interface : public Kernel_Interface_Base
{

public:

 Kernel_Component_Interface();

 void supply_report(QTextStream& qts) const;
 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;

 static void absorb_data(QDataStream& qds, Kernel_Component_Interface& _this);
 friend void operator>>(QDataStream& qds, Kernel_Component_Interface& _this)
 {
  Kernel_Component_Interface::absorb_data(qds, _this);
 }

};

_APDLNS(RefI)


#endif
