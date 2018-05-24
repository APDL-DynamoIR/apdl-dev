
#include "public-service-interface.h"

#include "apdl-refi_op.h"

#include "apdlns.h"

USING_APDLNS(RefI)


Public_Service_Interface::Public_Service_Interface()
{

}

void Public_Service_Interface::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);
}

void Public_Service_Interface::supply_data(QDataStream& qds) const
{
 qds << ksi_;
 qds << kbi_;
 qds << kci_;
}

void Public_Service_Interface::absorb_data(QDataStream& qds, Public_Service_Interface& _this)
{
 qds >> _this.ksi_;
 qds >> _this.kbi_;
 qds >> _this.kci_;
}



// {
//  QByteArray qba1;
//  ksi_.supply_data(qba1);
//  qds << qba1;
// }

// {
//  QByteArray qba1;
//  kbi_.supply_data(qba1);
//  qds << qba1;
// }

// {
//  QByteArray qba1;
//  kci_.supply_data(qba1);
//  qds << qba1;
// }



