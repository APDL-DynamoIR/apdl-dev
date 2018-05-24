
#include "apdl-local-deployment-info.h"

#include "apdlns.h"

#include <QDataStream>


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

void APDL_Local_Deployment_Info::absorb_data(QDataStream& qds, APDL_Local_Deployment_Info& _this)
{
 qds >> _this.executable_path_;
 qds >> _this.internal_data_path_;
 qds >> _this.user_data_path_;
 qds >> _this.comments_;
 qds >> _this.contextualiation_method_;
 qds >> _this.args_templates_;
}

void APDL_Local_Deployment_Info::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);
}

void APDL_Local_Deployment_Info::supply_data(QDataStream& qds) const
{
 qds << executable_path_;
 qds << internal_data_path_;
 qds << user_data_path_;
 qds << comments_;
 qds << contextualiation_method_;
 qds << args_templates_;
}

