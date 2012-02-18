// CaboCha -- Yet Another Japanese Dependency Parser
//
//  $Id: common.h 41 2008-01-20 09:31:34Z taku-ku $;
//
//  Copyright(C) 2001-2008 Taku Kudo <taku@chasen.org>
#ifndef CABOCHA_COMMON_H_
#define CABOCHA_COMMON_H_

#include <setjmp.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#if defined(_WIN32) && ! defined(__CYGWIN__)
#include <strstream>
#else
#include <sstream>
#endif

// tricky macro for MSVC
#ifdef _MSC_VER
#define for if (0); else for
/* why windows.h define such a generic macro */
#undef max
#undef min
#define snprintf _snprintf
#endif

#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif

#define COPYRIGHT "CaboCha (Yet Another Japanese Dependency Structure Analyzer)\n\
Copyright(C) 2001-2011 Taku Kudo, All rights reserved.\n"

#define BUF_SIZE 8192
#define CABOCHA_MAX_LINE_SIZE 8192
#define CABOCHA_NODE_SIZE 8192
#define CABOCHA_FEATURE_SIZE 8192 * 16
#define CABOCHA_CHUNK_SIZE 256
#define CABOCHA_TOKEN_SIZE 1024

#ifndef CABOCHA_DEFAULT_POSSET
#define CABOCHA_DEFAULT_POSSET  "IPA"
#endif

#ifndef CABOCHA_DEFAULT_CHARSET
#if defined(_WIN32) && ! defined(__CYGWIN__)
#define CABOCHA_DEFAULT_CHARSET "SHIFT-JIS"
#else
#define CABOCHA_DEFAULT_CHARSET "UTF-8"
#endif
#endif

#ifndef CABOCHA_DEFAULT_RC
#define CABOCHA_DEFAULT_RC "/usr/local/etc/cabocharc"
#endif

#if defined(_WIN32) && !defined(__CYGWIN__)
#define WPATH(path) (MeCab::Utf8ToWide(path).c_str())
#else
#define WPATH(path) (path)
#endif

namespace CaboCha {

enum { PARSING_MODE, TRAINING_MODE };

class die {
 public:
  die() {}
  ~die() {
    std::cerr << std::endl;
    exit(-1);
  }
  int operator&(std::ostream&) { return 0; }
};

struct whatlog {
  std::ostringstream stream_;
  std::string str_;
  const char *str() {
    str_ = stream_.str();
    return str_.c_str();
  }
};

class wlog {
 public:
  wlog(whatlog *what) : what_(what) {
    what_->stream_.clear();
  }
  bool operator&(std::ostream &) {
    return false;
  }
 private:
  whatlog *what_;
};
}  // CRFPP

#define WHAT what_.stream_

#define CHECK_FALSE(condition) \
 if (condition) {} else return \
   wlog(&what_) & what_.stream_ <<              \
      __FILE__ << "(" << __LINE__ << ") [" << #condition << "] "

#define CHECK_DIE(condition) \
(condition) ? 0 : die() & std::cerr << __FILE__ << \
"(" << __LINE__ << ") [" << #condition << "] "

#endif

