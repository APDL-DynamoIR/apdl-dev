
#include "apdl-refi.h"

#include "apdlns.h"

#include "apdl-basic-application.h"
#include "deployment/apdl-local-deployment-info.h"
#include "deployment/apdl-repository-info.h"
#include "provenance/apdl-annotated-data.h"
#include "psi/public-service-interface.h"

USING_APDLNS(RefI)

APDL_Refi::APDL_Refi()
  :  basic_application_info_(nullptr)
   ,local_deployment_info_(nullptr)
   ,repository_info_(nullptr)
   ,annotated_data_(nullptr)
{

}

ACCESSORS__INIT_PTR(APDL_Refi,APDL_Basic_Application ,basic_application_info)
ACCESSORS__INIT_PTR(APDL_Refi,APDL_Local_Deployment_Info ,local_deployment_info)
ACCESSORS__INIT_PTR__PASSKEY(APDL_Refi,APDL_Repository_Info ,repository_info)
ACCESSORS__INIT_PTR__PASSKEY(APDL_Refi,APDL_Annotated_Data ,annotated_data)
ACCESSORS__INIT_PTR(APDL_Refi,Public_Service_Interface ,psi)
