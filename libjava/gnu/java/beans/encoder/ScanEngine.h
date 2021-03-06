
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_beans_encoder_ScanEngine__
#define __gnu_java_beans_encoder_ScanEngine__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace beans
      {
        namespace encoder
        {
            class ObjectId;
            class Root;
            class ScanEngine;
            class ScannerState;
            class Writer;
        }
      }
    }
  }
  namespace java
  {
    namespace beans
    {
        class Expression;
        class Statement;
    }
  }
}

class gnu::java::beans::encoder::ScanEngine : public ::java::lang::Object
{

public:
  ScanEngine(::java::io::OutputStream *);
private:
  ::gnu::java::beans::encoder::ScannerState * register$(::java::lang::String *, ::gnu::java::beans::encoder::ScannerState *);
  ::gnu::java::beans::encoder::ObjectId * retrieveId(::java::lang::Object *);
public:
  virtual void writeExpression(::java::beans::Expression *);
  virtual void end();
  virtual void revoke();
  virtual void writeStatement(::java::beans::Statement *);
  virtual jboolean writeObject(::java::lang::Object *);
  virtual void flush();
  virtual void close();
private:
  void transition(jint);
public: // actually package-private
  virtual void methodInvocation(::java::lang::String *);
  virtual void staticMethodInvocation(::java::lang::String *, ::java::lang::String *);
  virtual void staticFieldAccess(::java::lang::String *, ::java::lang::String *);
  virtual void classResolution(::java::lang::String *);
  virtual void objectInstantiation(::java::lang::String *, ::gnu::java::beans::encoder::ObjectId *);
  virtual void primitiveInstantiation(::java::lang::String *, ::java::lang::String *);
  virtual void objectArrayInstantiation(::java::lang::String *, ::java::lang::String *, ::gnu::java::beans::encoder::ObjectId *);
  virtual void primitiveArrayInstantiation(::java::lang::String *, ::java::lang::String *, ::gnu::java::beans::encoder::ObjectId *);
  virtual void arraySet(::java::lang::String *);
  virtual void arrayGet(::java::lang::String *);
  virtual void listSet();
  virtual void listGet();
  virtual void nullObject();
  virtual void stringReference(::java::lang::String *);
  virtual void objectReference(::gnu::java::beans::encoder::ObjectId *);
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object)))) DEBUG;
  ::java::util::HashMap * states;
  ::java::util::Stack * parents;
  ::gnu::java::beans::encoder::ScannerState * current;
  ::gnu::java::beans::encoder::Root * root;
  ::gnu::java::beans::encoder::Writer * writer;
  ::java::util::IdentityHashMap * objects;
  static jboolean $assertionsDisabled;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_beans_encoder_ScanEngine__
