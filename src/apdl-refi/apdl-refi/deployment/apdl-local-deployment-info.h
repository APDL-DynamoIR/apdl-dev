
#ifndef APDL_LOCAL_DEPLOYMENT_INFO__H
#define APDL_LOCAL_DEPLOYMENT_INFO__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>
#include <QQueue>

APDLNS_(RefI)

class APDL_Local_Deployment_Info
{
 QString executable_path_;
 QString internal_data_path_;
 QString user_data_path_;
 QStringList comments_;

 QString contextualiation_method_;
 QQueue<QString> args_templates_;


public:

 ACCESSORS(QString ,executable_path)
 ACCESSORS(QString ,internal_data_path)
 ACCESSORS(QString ,user_data_path)
 ACCESSORS__RGET(QStringList ,comments)

 ACCESSORS(QString ,contextualiation_method)
 ACCESSORS__RGET_CONST_RGET(QQueue<QString> ,args_templates)

 ACCESSORS__DECLARE(QString ,args_template)


 APDL_Local_Deployment_Info();
 void supply_data(QByteArray& qba) const;

 static void absorb_data(QDataStream& qds, APDL_Local_Deployment_Info& _this);
 friend void operator>>(QDataStream& qds, APDL_Local_Deployment_Info& _this)
 {
  APDL_Local_Deployment_Info::absorb_data(qds, _this);
 }


};

_APDLNS(RefI)


#endif
