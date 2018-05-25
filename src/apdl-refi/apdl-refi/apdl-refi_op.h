
#ifndef APDL_REFI__OP__H
#define APDL_REFI__OP__H

#include "apdlns.h"

#include "accessors.h"

#include <QtGlobal>
#include <QTextStream>


APDLNS_(RefI)

template<typename T>
void operator<<(QDataStream& qds, const T& _this)
{
 _this.supply_data(qds);
}

template<typename T>
void operator<<(QTextStream& qds, const T& _this)
{
 _this.supply_report(qds);
}

_APDLNS(RefI)


#endif
