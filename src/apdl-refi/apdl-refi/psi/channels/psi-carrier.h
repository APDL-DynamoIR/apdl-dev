
#ifndef PSI_CARRIER__H
#define PSI_CARRIER__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>
#include <QMap>

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




};

_APDLNS(RefI)


#endif
