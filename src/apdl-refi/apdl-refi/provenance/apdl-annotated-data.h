
#ifndef APDL_ANNOTATED_DATA__H
#define APDL_ANNOTATED_DATA__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>

#include "apdl-unique.h"

APDLNS_(RefI)

class APDL_Annotated_Data
{
 QString application_name_;
 APDL_Unique application_unique_instance_;

 QString data_file_;
 QString data_folder_;
 QByteArray data_buffer_;
 QString data_base32_;

public:

 APDL__PASSKEY

 ACCESSORS(QString ,application_name)
 ACCESSORS(QString ,data_file)
 ACCESSORS(QString ,data_folder)
 ACCESSORS__RGET(QByteArray ,data_buffer)
 ACCESSORS(QString ,data_base32)

 explicit APDL_Annotated_Data(const APDL_Unique& application_unique_instance);

 APDL_Annotated_Data(_passkey);
 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;


 static void absorb_data(QDataStream& qds, APDL_Annotated_Data& _this);
 friend void operator>>(QDataStream& qds, APDL_Annotated_Data& _this)
 {
  APDL_Annotated_Data::absorb_data(qds, _this);
 }

};

_APDLNS(RefI)


#endif
