
#include "apdl-annotated-data.h"

#include "apdlns.h"

#include <QDataStream>


USING_APDLNS(RefI)

APDL_Annotated_Data::APDL_Annotated_Data(const APDL_Unique& application_unique_instance)
  :  application_unique_instance_(application_unique_instance)
{

}

APDL_Annotated_Data::APDL_Annotated_Data(_passkey)
  :  application_unique_instance_(APDL_Unique(APDL_UNIQUE_DEFAULT_IDENTIFIER))
{

}

void APDL_Annotated_Data::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);
 supply_data(qds);

}

void APDL_Annotated_Data::supply_data(QDataStream& qds) const
{
 qds << application_name_;
 qds << data_file_;
 qds << data_folder_;
 qds << data_buffer_;
 qds << data_base32_;

}

void APDL_Annotated_Data::absorb_data(QDataStream& qds, APDL_Annotated_Data& _this)
{
 qds >> _this.application_name_;
 qds >> _this.data_file_;
 qds >> _this.data_folder_;
 qds >> _this.data_buffer_;
 qds >> _this.data_base32_;

}
