
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_security_auth_callback_CertificateCallback__
#define __gnu_javax_security_auth_callback_CertificateCallback__

#pragma interface

#include <javax/security/auth/callback/ConfirmationCallback.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace security
      {
        namespace auth
        {
          namespace callback
          {
              class CertificateCallback;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
          class Certificate;
      }
    }
  }
}

class gnu::javax::security::auth::callback::CertificateCallback : public ::javax::security::auth::callback::ConfirmationCallback
{

public:
  CertificateCallback(::java::security::cert::Certificate *, ::java::lang::String *);
public: // actually package-private
  static const jlong serialVersionUID = 8343869651419225634LL;
public:
  ::java::security::cert::Certificate * __attribute__((aligned(__alignof__( ::javax::security::auth::callback::ConfirmationCallback)))) certificate;
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_security_auth_callback_CertificateCallback__
