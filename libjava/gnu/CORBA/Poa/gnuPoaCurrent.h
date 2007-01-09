
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_Poa_gnuPoaCurrent__
#define __gnu_CORBA_Poa_gnuPoaCurrent__

#pragma interface

#include <org/omg/CORBA/portable/ObjectImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace Poa
      {
          class gnuPoaCurrent;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace PortableServer
      {
          class CurrentOperations;
          class POA;
      }
    }
  }
}

class gnu::CORBA::Poa::gnuPoaCurrent : public ::org::omg::CORBA::portable::ObjectImpl
{

public:
  gnuPoaCurrent();
  virtual JArray< ::java::lang::String * > * _ids();
  virtual JArray< jbyte > * get_object_id();
  virtual ::org::omg::PortableServer::POA * get_POA();
  virtual void put(::java::lang::Thread *, ::org::omg::PortableServer::CurrentOperations *);
  virtual jboolean has(::org::omg::PortableServer::POA *);
  virtual jboolean has(::java::lang::Thread *);
  virtual void remove(::java::lang::Thread *);
private:
  ::java::util::TreeMap * __attribute__((aligned(__alignof__( ::org::omg::CORBA::portable::ObjectImpl)))) threads;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_Poa_gnuPoaCurrent__
