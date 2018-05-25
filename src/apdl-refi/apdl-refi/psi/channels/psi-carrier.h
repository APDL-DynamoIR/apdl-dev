
#ifndef PSI_CARRIER__H
#define PSI_CARRIER__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>
#include <QMap>
#include <QTextStream>

APDLNS_(RefI)

class PSI_Type_Expression;

class PSI_Carrier
{
 QString symbol_;
 PSI_Type_Expression* typex_;

 union
 {
  QString* flagcode_;
  quint64 flagmask_;
 };

public:

 ACCESSORS(QString ,symbol)
 ACCESSORS(PSI_Type_Expression* ,typex)
 ACCESSORS(quint64 ,flagmask)
 ACCESSORS(QString* ,flagcode)

 PSI_Carrier();

 void get_flags(QMap<QString, quint64>& flag_map);

 void dodelete();

 void init_flagcode(QString fc);

 void supply_report(QTextStream& qts) const; void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;

 static void absorb_data(QDataStream& qds, PSI_Carrier& _this);
 friend void operator>>(QDataStream& qds, PSI_Carrier& _this)
 {
  PSI_Carrier::absorb_data(qds, _this);
 }



};

_APDLNS(RefI)


#endif
