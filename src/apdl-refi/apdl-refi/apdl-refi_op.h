
#ifndef APDL_REFI__OP__H
#define APDL_REFI__OP__H

#include "apdlns.h"

#include "accessors.h"

#include <QtGlobal>


APDLNS_(RefI)

template<typename T>
void operator<<(QDataStream& qds, const T& _this)
{
 _this.supply_data(qds);
}


_APDLNS(RefI)


#endif
