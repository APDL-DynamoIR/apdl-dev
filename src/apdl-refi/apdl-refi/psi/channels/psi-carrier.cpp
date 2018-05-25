
#include "psi-carrier.h"

#include "apdlns.h"

#include <QDataStream>

#include "psi-type-expression.h"



USING_APDLNS(RefI)

PSI_Carrier::PSI_Carrier()
  :  typex_(nullptr), flagcode_(nullptr)
{

}

void PSI_Carrier::get_flags(QMap<QString, quint64>& flag_map)
{
 if(flagcode_)
 {
  QStringList qsl = flagcode_->split(' ');
  for(QString qs : qsl)
  {
   flag_map[qs] = 0;
  }
 }
}

void PSI_Carrier::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);
}

void PSI_Carrier::supply_report(QTextStream& qts) const
{

}

void PSI_Carrier::supply_data(QDataStream& qds) const
{
 qds << symbol_;
 QByteArray qba;
 typex_->supply_data(qba);
 qds << qba;
 QString fc;
 quint64 fm;
 if( (flagmask_ & 1) == 0 )
 {
  fc = *flagcode_;
  fm = 0;
 }
 else
 {
  fm = flagmask_;
 }
 qds << fc;
 qds << fm;
}

void PSI_Carrier::init_flagcode(QString fc)
{
 flagcode_ = new QString(fc);
}

void PSI_Carrier::dodelete()
{
 if( (flagmask_ & 1) == 0 )
 {
  delete flagcode_;
 }
}

void PSI_Carrier::absorb_data(QDataStream& qds, PSI_Carrier& _this)
{
 qds >> _this.symbol_;
 QByteArray qba;
 qds >> qba;
 PSI_Type_Expression* tx = new PSI_Type_Expression;
 tx->absorb_data(qba);
 _this.set_typex(tx);
 QString fc;
 quint64 fm;
 qds >> fc;
 qds >> fm;
 if( (fm & 1) == 0 )
 {
  _this.init_flagcode(fc);
 }
 else
 {
  _this.set_flagmask(fm);
 }
}


