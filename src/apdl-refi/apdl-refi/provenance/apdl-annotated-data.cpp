
#include "apdl-annotated-data.h"

#include "apdlns.h"

USING_APDLNS(RefI)

APDL_Annotated_Data::APDL_Annotated_Data(const APDL_Unique& application_unique_instance)
  :  application_unique_instance_(application_unique_instance)
{

}

APDL_Annotated_Data::APDL_Annotated_Data(_passkey)
  :  application_unique_instance_(APDL_Unique(APDL_UNIQUE_DEFAULT_IDENTIFIER))
{

}


