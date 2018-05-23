
#ifndef APDLNS__H
#define APDLNS__H

#define USE_APDLNS

#ifdef USE_APDLNS

#define APDLNS_(X) \
 namespace APDL { namespace X {

#define _APDLNS(X) \
 } }


#define APDLNS_CLASS_DECLARE(X ,C) \
 namespace APDL { namespace X { class C; } }

#ifndef INNER_NS_
#define INNER_NS_(X) \
 namespace X{
#endif
     
#ifndef _INNER_NS
#define _INNER_NS(X) \
 }
#endif
 
#define USING_APDLNS(x) \
 using namespace APDL::x;


#else

#define APDLNS_(X) \

#define _APDLNS(X) \

#define USING_APDLNS(x) \

#define INNER_NS_(X) 

#define _INNER_NS(X) 

#endif


#endif // APDLNS__H
