
#include "apdl-local-deployment-info.h"

#include "apdlns.h"

USING_APDLNS(RefI)

APDL_Local_Deployment_Info::APDL_Local_Deployment_Info()
{

}

void APDL_Local_Deployment_Info::set_args_template(QString tem)
{
 args_templates().enqueue(tem);
}

QString APDL_Local_Deployment_Info::args_template() const
{
 return args_templates().head();
}


