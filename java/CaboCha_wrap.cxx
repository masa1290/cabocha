/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1 
#define  SWIG_IOError        	   -2 
#define  SWIG_RuntimeError   	   -3 
#define  SWIG_IndexError     	   -4 
#define  SWIG_TypeError      	   -5 
#define  SWIG_DivisionByZero 	   -6 
#define  SWIG_OverflowError  	   -7 
#define  SWIG_SyntaxError    	   -8 
#define  SWIG_ValueError     	   -9 
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12 
#define  SWIG_NullReferenceError   -13




SWIGINTERN void SWIG_JavaException(JNIEnv *jenv, int code, const char *msg) {
  SWIG_JavaExceptionCodes exception_code = SWIG_JavaUnknownError;
  switch(code) {
  case SWIG_MemoryError:
    exception_code = SWIG_JavaOutOfMemoryError;
    break;
  case SWIG_IOError:
    exception_code = SWIG_JavaIOException;
    break;
  case SWIG_SystemError:
  case SWIG_RuntimeError:
    exception_code = SWIG_JavaRuntimeException;
    break;
  case SWIG_OverflowError:
  case SWIG_IndexError:
    exception_code = SWIG_JavaIndexOutOfBoundsException;
    break;
  case SWIG_DivisionByZero:
    exception_code = SWIG_JavaArithmeticException;
    break;
  case SWIG_SyntaxError:
  case SWIG_ValueError:
  case SWIG_TypeError:
    exception_code = SWIG_JavaIllegalArgumentException;
    break;
  case SWIG_UnknownError:
  default:
    exception_code = SWIG_JavaUnknownError;
    break;
  }
  SWIG_JavaThrowException(jenv, exception_code, msg);
}


#include <stdexcept>


#include "cabocha.h"


void delete_CaboCha_Parser(CaboCha::Parser *t) {
  delete t;
  t = 0;
}

CaboCha::Parser* new_CaboCha_Parser(const char *arg) {
  CaboCha::Parser *parser = CaboCha::createParser(arg);
  if (! parser) throw CaboCha::getParserError();
  return parser;
}

CaboCha::Parser* new_CaboCha_Parser() {
  CaboCha::Parser *parser = CaboCha::createParser("");
  if (! parser) throw CaboCha::getParserError();
  return parser;
}


SWIGINTERN char const *cabocha_chunk_t_feature_list(cabocha_chunk_t *self,size_t i){
    if (self->feature_list_size < i)
     throw "index is out of range";
    return self->feature_list[i];
  }
SWIGINTERN char const *cabocha_token_t_feature_list(cabocha_token_t *self,size_t i){
    if (self->feature_list_size < i)
     throw "index is out of range";
    return self->feature_list[i];
  }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1link_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  result = (int) ((arg1)->link);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1head_1pos_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  unsigned short result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  result = (unsigned short) ((arg1)->head_pos);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1func_1pos_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  unsigned short result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  result = (unsigned short) ((arg1)->func_pos);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1token_1size_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  unsigned short result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  result = (unsigned short) ((arg1)->token_size);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1token_1pos_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  result =  ((arg1)->token_pos);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jfloat JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1score_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  result = (float) ((arg1)->score);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1feature_1list_1size_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  unsigned short result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  result = (unsigned short) ((arg1)->feature_list_size);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Chunk_1feature_1list(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jstring jresult = 0 ;
  cabocha_chunk_t *arg1 = (cabocha_chunk_t *) 0 ;
  size_t arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_chunk_t **)&jarg1; 
  arg2 = (size_t)jarg2; 
  {
    try {
      result = (char *)cabocha_chunk_t_feature_list(arg1,arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Token_1surface_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  cabocha_token_t *arg1 = (cabocha_token_t *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_token_t **)&jarg1; 
  result = (char *) ((arg1)->surface);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  delete [] result;
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Token_1normalized_1surface_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  cabocha_token_t *arg1 = (cabocha_token_t *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_token_t **)&jarg1; 
  result = (char *) ((arg1)->normalized_surface);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Token_1feature_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  cabocha_token_t *arg1 = (cabocha_token_t *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_token_t **)&jarg1; 
  result = (char *) ((arg1)->feature);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Token_1feature_1list_1size_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  cabocha_token_t *arg1 = (cabocha_token_t *) 0 ;
  unsigned short result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_token_t **)&jarg1; 
  result = (unsigned short) ((arg1)->feature_list_size);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Token_1ne_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  cabocha_token_t *arg1 = (cabocha_token_t *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_token_t **)&jarg1; 
  result = (char *) ((arg1)->ne);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Token_1chunk_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  cabocha_token_t *arg1 = (cabocha_token_t *) 0 ;
  cabocha_chunk_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_token_t **)&jarg1; 
  result = (cabocha_chunk_t *) ((arg1)->chunk);
  *(cabocha_chunk_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Token_1feature_1list(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jstring jresult = 0 ;
  cabocha_token_t *arg1 = (cabocha_token_t *) 0 ;
  size_t arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(cabocha_token_t **)&jarg1; 
  arg2 = (size_t)jarg2; 
  {
    try {
      result = (char *)cabocha_token_t_feature_list(arg1,arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1set_1sentence(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  char *arg2 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return ;
  }
  {
    try {
      (arg1)->set_sentence((char const *)arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1sentence(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = (char *)((CaboCha::Tree const *)arg1)->sentence(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1sentence_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = ((CaboCha::Tree const *)arg1)->sentence_size(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1chunk(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jlong jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  size_t arg2 ;
  CaboCha::Chunk *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = (size_t)jarg2; 
  {
    try {
      result = (CaboCha::Chunk *)((CaboCha::Tree const *)arg1)->chunk(arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  *(CaboCha::Chunk **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1token(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jlong jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  size_t arg2 ;
  CaboCha::Token *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = (size_t)jarg2; 
  {
    try {
      result = (CaboCha::Token *)((CaboCha::Tree const *)arg1)->token(arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  *(CaboCha::Token **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1read(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3) {
  jboolean jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  char *arg2 = (char *) 0 ;
  CaboCha::InputLayerType arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (CaboCha::InputLayerType)jarg3; 
  {
    try {
      result = (bool)(arg1)->read((char const *)arg2,arg3); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1empty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = (bool)((CaboCha::Tree const *)arg1)->empty(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      (arg1)->clear(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1clear_1chunk(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      (arg1)->clear_chunk(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1chunk_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = ((CaboCha::Tree const *)arg1)->chunk_size(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1token_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = ((CaboCha::Tree const *)arg1)->token_size(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = ((CaboCha::Tree const *)arg1)->size(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1toString(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  CaboCha::FormatType arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = (CaboCha::FormatType)jarg2; 
  {
    try {
      result = (char *)(arg1)->toString(arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1charset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  CaboCha::CharsetType result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = (CaboCha::CharsetType)((CaboCha::Tree const *)arg1)->charset(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1set_1charset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  CaboCha::CharsetType arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = (CaboCha::CharsetType)jarg2; 
  {
    try {
      (arg1)->set_charset(arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1posset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  CaboCha::PossetType result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = (CaboCha::PossetType)((CaboCha::Tree const *)arg1)->posset(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1set_1posset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  CaboCha::PossetType arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = (CaboCha::PossetType)jarg2; 
  {
    try {
      (arg1)->set_posset(arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
}


SWIGEXPORT jint JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1output_1layer(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  CaboCha::OutputLayerType result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      result = (CaboCha::OutputLayerType)((CaboCha::Tree const *)arg1)->output_layer(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_Tree_1set_1output_1layer(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  CaboCha::OutputLayerType arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  arg2 = (CaboCha::OutputLayerType)jarg2; 
  {
    try {
      (arg1)->set_output_layer(arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_new_1Tree(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  CaboCha::Tree *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    try {
      result = (CaboCha::Tree *)new CaboCha::Tree(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  *(CaboCha::Tree **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_delete_1Tree(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  CaboCha::Tree *arg1 = (CaboCha::Tree *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(CaboCha::Tree **)&jarg1; 
  {
    try {
      delete arg1; 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Parser_1parse_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jlong jresult = 0 ;
  CaboCha::Parser *arg1 = (CaboCha::Parser *) 0 ;
  char *arg2 = (char *) 0 ;
  CaboCha::Tree *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Parser **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  {
    try {
      result = (CaboCha::Tree *)(arg1)->parse((char const *)arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  *(CaboCha::Tree **)&jresult = result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Parser_1parseToString(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jstring jresult = 0 ;
  CaboCha::Parser *arg1 = (CaboCha::Parser *) 0 ;
  char *arg2 = (char *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Parser **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  {
    try {
      result = (char *)(arg1)->parseToString((char const *)arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_Parser_1parse_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  CaboCha::Parser *arg1 = (CaboCha::Parser *) 0 ;
  CaboCha::Tree *arg2 = (CaboCha::Tree *) 0 ;
  CaboCha::Tree *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(CaboCha::Parser **)&jarg1; 
  arg2 = *(CaboCha::Tree **)&jarg2; 
  {
    try {
      result = (CaboCha::Tree *)(arg1)->parse(arg2); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  *(CaboCha::Tree **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Parser_1what(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  CaboCha::Parser *arg1 = (CaboCha::Parser *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CaboCha::Parser **)&jarg1; 
  {
    try {
      result = (char *)(arg1)->what(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_Parser_1version(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    try {
      result = (char *)CaboCha::Parser::version(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_chasen_cabocha_CaboChaJNI_delete_1Parser(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  CaboCha::Parser *arg1 = (CaboCha::Parser *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(CaboCha::Parser **)&jarg1; 
  {
    try {
      delete arg1; 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return ; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return ; 
      }; 
    }
  }
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_new_1Parser_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  CaboCha::Parser *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  {
    try {
      result = (CaboCha::Parser *)new_CaboCha_Parser((char const *)arg1); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  *(CaboCha::Parser **)&jresult = result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_chasen_cabocha_CaboChaJNI_new_1Parser_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  CaboCha::Parser *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    try {
      result = (CaboCha::Parser *)new_CaboCha_Parser(); 
    }
    catch (char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, e); return 0; 
      }; 
    }
    catch (const char *e) {
      {
        SWIG_JavaException(jenv, SWIG_RuntimeError, (char*)e); return 0; 
      }; 
    }
  }
  *(CaboCha::Parser **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_chasen_cabocha_CaboChaJNI_VERSION_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *) "0.60";
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


#ifdef __cplusplus
}
#endif

