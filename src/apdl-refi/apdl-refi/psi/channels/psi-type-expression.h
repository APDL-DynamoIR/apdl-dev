
#ifndef PSI_TYPE_EXPRESSION__H
#define PSI_TYPE_EXPRESSION__H

#include "apdlns.h"

#include "accessors.h"

#include "psi-signature.h"

#include <QString>

APDLNS_(RefI)

class PSI_Type_Expression
{
 QString symbol_;
 PSI_Signature signature_;

public:

 PSI_Type_Expression();

 ACCESSORS(QString ,symbol)
 ACCESSORS__RGET(PSI_Signature ,signature)



};

_APDLNS(RefI)


#endif
