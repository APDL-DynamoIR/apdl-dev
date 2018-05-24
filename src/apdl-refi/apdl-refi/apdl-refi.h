
#ifndef APDL_REFI__H
#define APDL_REFI__H

#include "apdlns.h"

#include "accessors.h"

#include <QtGlobal>


APDLNS_(RefI)

class APDL_Basic_Application;
class APDL_Local_Deployment_Info;
class APDL_Repository_Info;
class APDL_Annotated_Data;
class Public_Service_Interface;

class APDL_Refi
{
 APDL_Basic_Application* basic_application_info_;
 APDL_Local_Deployment_Info* local_deployment_info_;
 APDL_Repository_Info* repository_info_;
 APDL_Annotated_Data* annotated_data_;
 Public_Service_Interface* psi_;

public:

 ACCESSORS__WITH_INIT_PTR(APDL_Basic_Application ,basic_application_info)
 ACCESSORS__WITH_INIT_PTR(APDL_Local_Deployment_Info ,local_deployment_info)
 ACCESSORS__WITH_INIT_PTR(APDL_Repository_Info ,repository_info)
 ACCESSORS__WITH_INIT_PTR(APDL_Annotated_Data ,annotated_data)
 ACCESSORS__WITH_INIT_PTR(Public_Service_Interface ,psi)

 APDL_Refi();

 quint16 get_init_code() const;
 void init_from_init_code(quint16 code);

 void supply_data(QByteArray& qba) const;
 void absorb_data(const QByteArray& qba);


};

_APDLNS(RefI)


#endif
