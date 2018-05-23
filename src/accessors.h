#ifndef ACCESSORS__H
#define ACCESSORS__H


#ifndef APDL__PASSKEY
#define APDL__PASSKEY \
class _passkey \
{ \
 friend class APDL_Refi; \
 _passkey(){} \
};
#endif


#ifndef ACCESSORS__GET
#define ACCESSORS__GET(type, name) \
 type name() const { return name##_; }
#endif


#ifndef ACCESSORS__IMPL_GET
#define ACCESSORS__IMPL_GET(type, name) \
 type name() const { return impl_.name(); }
#endif

#ifndef ACCESSORS__IMPL_SET
#define ACCESSORS__IMPL_SET(type, name) \
 void set_##name(type t) { impl_.set_##name(t); }
#endif


#ifndef ACCESSORS__IMPL
#define ACCESSORS__IMPL(type, name) \
 ACCESSORS__IMPL_GET(type, name) \
 ACCESSORS__IMPL_SET(type, name)
#endif


#ifndef ACCESSORS__CGET
#define ACCESSORS__CGET(type, name) \
 const type name() const { return name##_; }
#endif


#ifndef ACCESSORS__STATIC_GET
#define ACCESSORS__STATIC_GET(type, name) \
 static type name() { return name##_; }
#endif


#ifndef ACCESSORS__RGET
#define ACCESSORS__RGET(type, name) \
 type& name() { return name##_; }
#endif


#ifndef ACCESSORS__CONST_RGET
#define ACCESSORS__CONST_RGET(type, name) \
 const type& name() const { return name##_; }
#endif


#ifndef ACCESSORS__RGET_CONST_RGET
#define ACCESSORS__RGET_CONST_RGET(type, name) \
 ACCESSORS__RGET(type, name) \
 ACCESSORS__CONST_RGET(type, name)
#endif


#ifndef ACCESSORS__RGET_DEREF
#define ACCESSORS__RGET_DEREF(type, name) \
 type& name() { return *name##_; }
#endif


#ifndef ACCESSORS__STATIC_RGET
#define ACCESSORS__STATIC_RGET(type, name) \
 static type& name() { return name##_; }
#endif


#ifndef ACCESSORS__SET
#define ACCESSORS__SET(type, name) \
 void set_##name(type _arg_) { name##_ = _arg_; }
#endif


#ifndef Q_INVOKABLE__ACCESSORS__SET
#define Q_INVOKABLE__ACCESSORS__SET(type, name) \
 void Q_INVOKABLE set_##name(type _arg_) { name##_ = _arg_; }
#endif



#ifndef ACCESSORS__SDECLARE
#define ACCESSORS__SDECLARE(type, name) \
 void set_##name(type name);
#endif

#ifndef ACCESSORS__SET__IMPL
#define ACCESSORS__SET__IMPL(type, name) \
 void set_##name(type name)
#endif


#ifndef ACCESSORS__GDECLARE
#define ACCESSORS__GDECLARE(type, name) \
 type name() const;
#endif


#ifndef ACCESSORS__DECLARE
#define ACCESSORS__DECLARE(type, name) \
 ACCESSORS__GDECLARE(type, name) \
 ACCESSORS__SDECLARE(type, name)
#endif


#ifndef ACCESSORS
#define ACCESSORS(type, name) \
 ACCESSORS__GET(type, name) \
 ACCESSORS__SET(type, name)
#endif


#ifndef ACCESSORS__INIT_PTR__DECLARE
#define ACCESSORS__INIT_PTR__DECLARE(name) \
 void init_##name();
#endif

#ifndef ACCESSORS__INIT_PTR
#define ACCESSORS__INIT_PTR(cl, type, name) \
 void cl::init_##name() {name##_ = new type;}
#endif

#ifndef ACCESSORS__INIT_PTR__PASSKEY
#define ACCESSORS__INIT_PTR__PASSKEY(cl, type, name) \
 void cl::init_##name() {name##_ = new type(type::_passkey());}
#endif


#ifndef ACCESSORS__WITH_INIT_PTR
#define ACCESSORS__WITH_INIT_PTR(type, name) \
 ACCESSORS(type*, name) \
 ACCESSORS__INIT_PTR__DECLARE(name)
#endif


#ifndef Q_INVOKABLE__ACCESSORS
#define Q_INVOKABLE__ACCESSORS(type, name) \
 ACCESSORS__GET(type, name) \
 Q_INVOKABLE__ACCESSORS__SET(type, name)
#endif


#ifndef ACCESSORS__SET__CONST
#define ACCESSORS__SET__CONST(type, name) \
 void set_##name(type _arg_) const { name##_ = _arg_; }
#endif

#ifndef ACCESSORS__CONST
#define ACCESSORS__CONST(type, name) \
 ACCESSORS__GET(type, name) \
 ACCESSORS__SET__CONST(type, name)
#endif


#endif
