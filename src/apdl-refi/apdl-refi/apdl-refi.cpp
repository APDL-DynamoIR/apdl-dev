
#include "apdl-refi.h"

#include "apdlns.h"

#include "apdl-basic-application.h"
#include "deployment/apdl-local-deployment-info.h"
#include "deployment/apdl-repository-info.h"
#include "provenance/apdl-annotated-data.h"
#include "psi/public-service-interface.h"

#include <QDataStream>


USING_APDLNS(RefI)

APDL_Refi::APDL_Refi()
  :  basic_application_info_(nullptr)
   ,local_deployment_info_(nullptr)
   ,repository_info_(nullptr)
   ,annotated_data_(nullptr)
   ,psi_(nullptr)
{

}

ACCESSORS__INIT_PTR(APDL_Refi,APDL_Basic_Application ,basic_application_info)
ACCESSORS__INIT_PTR(APDL_Refi,APDL_Local_Deployment_Info ,local_deployment_info)
ACCESSORS__INIT_PTR__PASSKEY(APDL_Refi,APDL_Repository_Info ,repository_info)
ACCESSORS__INIT_PTR__PASSKEY(APDL_Refi,APDL_Annotated_Data ,annotated_data)
ACCESSORS__INIT_PTR(APDL_Refi,Public_Service_Interface ,psi)

quint16 APDL_Refi::get_init_code() const
{
 quint16 result = 0;

 if(basic_application_info_)
   result |= 1;

 if(local_deployment_info_)
   result |= 2;

 if(repository_info_)
   result |= 4;

 if(annotated_data_)
   result |= 8;

 if(psi_)
   result |= 16;

 return result;
}

void APDL_Refi::init_from_init_code(quint16 code)
{
 if(code & 1)
   init_basic_application_info();

 if(code & 2)
   init_local_deployment_info();

 if(code & 4)
   init_repository_info();

 if(code & 8)
   init_annotated_data();

 if(code & 16)
   init_psi();
}

void APDL_Refi::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);

 quint64 init_code = get_init_code();
 qds << init_code;

 {
  QByteArray qba1;
  if(basic_application_info_)
    basic_application_info_->supply_data(qba1);
  qds << qba1;
 }

 {
  QByteArray qba1;
  if(local_deployment_info_)
    local_deployment_info_->supply_data(qba1);
  qds << qba1;
 }

 {
  QByteArray qba1;
  if(repository_info_)
    repository_info_->supply_data(qba1);
  qds << qba1;
 }

 {
  QByteArray qba1;
  if(annotated_data_)
    annotated_data_->supply_data(qba1);
  qds << qba1;
 }

 {
  QByteArray qba1;
  if(psi_)
    psi_->supply_data(qba1);
  qds << qba1;
 }

}
