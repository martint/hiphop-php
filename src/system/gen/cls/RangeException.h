/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_RangeException_h__
#define __GENERATED_cls_RangeException_h__

#include <cls/RuntimeException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 241 */
class c_RangeException : public c_RuntimeException {
  public:

  // Properties

  // Class Map
  BEGIN_CLASS_MAP(RangeException)
    PARENT_CLASS(Exception)
    PARENT_CLASS(RuntimeException)
  END_CLASS_MAP(RangeException)
  DECLARE_CLASS_COMMON(RangeException, RangeException)
  DECLARE_INVOKE_EX(RangeException, RangeException, RuntimeException)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_RangeException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_RangeException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_RangeException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_RangeException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_RangeException 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_RangeException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_RangeException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_RangeException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_RangeException 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_RangeException 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
};
extern struct ObjectStaticCallbacks cw_RangeException;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_RangeException_h__