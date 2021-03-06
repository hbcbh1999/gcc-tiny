
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_InputStreamReader__
#define __java_io_InputStreamReader__

#pragma interface

#include <java/io/Reader.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
          class BytesToUnicode;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
          class Charset;
          class CharsetDecoder;
      }
    }
  }
}

class java::io::InputStreamReader : public ::java::io::Reader
{

public:
  InputStreamReader(::java::io::InputStream *);
  InputStreamReader(::java::io::InputStream *, ::java::lang::String *);
  InputStreamReader(::java::io::InputStream *, ::java::nio::charset::Charset *);
  InputStreamReader(::java::io::InputStream *, ::java::nio::charset::CharsetDecoder *);
private:
  InputStreamReader(::java::io::InputStream *, ::gnu::gcj::convert::BytesToUnicode *);
public:
  virtual void close();
  virtual ::java::lang::String * getEncoding();
  virtual jboolean ready();
  virtual jint read(JArray< jchar > *, jint, jint);
  virtual jint read();
private:
  jint refill(JArray< jchar > *, jint, jint);
public: // actually package-private
  ::java::io::BufferedInputStream * __attribute__((aligned(__alignof__( ::java::io::Reader)))) in;
  JArray< jchar > * work;
  jint wpos;
  jint wcount;
  ::gnu::gcj::convert::BytesToUnicode * converter;
public:
  static ::java::lang::Class class$;
};

#endif // __java_io_InputStreamReader__
