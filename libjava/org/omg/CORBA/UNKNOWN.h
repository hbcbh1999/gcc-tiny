
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_UNKNOWN__
#define __org_omg_CORBA_UNKNOWN__

#pragma interface

#include <org/omg/CORBA/SystemException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class CompletionStatus;
          class UNKNOWN;
      }
    }
  }
}

class org::omg::CORBA::UNKNOWN : public ::org::omg::CORBA::SystemException
{

public:
  UNKNOWN(::java::lang::String *);
  UNKNOWN();
  UNKNOWN(jint, ::org::omg::CORBA::CompletionStatus *);
  UNKNOWN(::java::lang::String *, jint, ::org::omg::CORBA::CompletionStatus *);
private:
  static const jlong serialVersionUID = -3556426185741898205LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_UNKNOWN__
