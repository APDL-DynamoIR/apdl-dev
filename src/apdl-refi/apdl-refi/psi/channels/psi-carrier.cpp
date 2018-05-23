
#include "psi-carrier.h"

#include "apdlns.h"

USING_APDLNS(RefI)


APDL_Basic_Application::APDL_Basic_Application()
{

}


void APDL_Basic_Application::set_version_string(unsigned maj, unsigned min, unsigned patch)
{
 set_version_string(QString("%1.%2.%3").arg(maj).arg(min).arg(patch));
}
