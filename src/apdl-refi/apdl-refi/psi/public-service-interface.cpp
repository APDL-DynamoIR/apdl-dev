
#include "public-service-interface.h"

#include "apdlns.h"

USING_APDLNS(RefI)


Public_Service_Interface::Public_Service_Interface()
{

}

void Public_Service_Interface::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);

 {
  QByteArray qba1;
  ksi.supply_data(qba1);
  qds << qba1;
 }

 {
  QByteArray qba1;
  kbi.supply_data(qba1);
  qds << qba1;
 }

 {
  QByteArray qba1;
  kci.supply_data(qba1);
  qds << qba1;
 }

}
