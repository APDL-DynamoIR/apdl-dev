
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

 qds << application_name_;
 qds << data_file_;
 qds << data_folder_;
 qds << data_buffer_;
 qds << data_base32_;

}

