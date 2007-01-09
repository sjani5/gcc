
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_JessieRSAPrivateKey__
#define __gnu_javax_net_ssl_provider_JessieRSAPrivateKey__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class JessieRSAPrivateKey;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
  }
}

class gnu::javax::net::ssl::provider::JessieRSAPrivateKey : public ::java::lang::Object
{

public: // actually package-private
  JessieRSAPrivateKey(::java::math::BigInteger *, ::java::math::BigInteger *);
public:
  virtual ::java::lang::String * getAlgorithm();
  virtual ::java::lang::String * getFormat();
  virtual JArray< jbyte > * getEncoded();
  virtual ::java::math::BigInteger * getModulus();
  virtual ::java::math::BigInteger * getPrivateExponent();
  virtual ::java::lang::String * toString();
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::lang::Object)))) modulus;
  ::java::math::BigInteger * exponent;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_JessieRSAPrivateKey__
