
#ifndef APDL_REFI__H
#define APDL_REFI__H

#include "apdlns.h"

#include "accessors.h"


APDLNS_(RefI)

class APDL_Basic_Application;
class APDL_Local_Deployment_Info;
class APDL_Repository_Info;
class APDL_Annotated_Data;

class APDL_Refi
{
 APDL_Basic_Application* basic_application_info_;
 APDL_Local_Deployment_Info* local_deployment_info_;
 APDL_Repository_Info* repository_info_;
 APDL_Annotated_Data* annotated_data_;

public:

 ACCESSORS__WITH_INIT_PTR(APDL_Basic_Application ,basic_application_info)
 ACCESSORS__WITH_INIT_PTR(APDL_Local_Deployment_Info ,local_deployment_info)
 ACCESSORS__WITH_INIT_PTR(APDL_Repository_Info ,repository_info)
 ACCESSORS__WITH_INIT_PTR(APDL_Annotated_Data ,annotated_data)

 APDL_Refi();


};

_APDLNS(RefI)


#endif
