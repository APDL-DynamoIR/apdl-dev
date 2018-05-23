
#include "psi-carrier.h"

#include "apdlns.h"

USING_APDLNS(RefI)

PSI_Carrier::PSI_Carrier()
  :  flagcode_(nullptr), typex_(nullptr)
{

}

void PSI_Carrier::get_flags(QMap<QString, quint64>& flag_map)
{
 if(*flagcode_)
 {
  QStringList qsl = flagcode_->split(' ');
  for(QString qs : qsl)
  {
   flag_map[qs] = 0;
  }
 }
}

