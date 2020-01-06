// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=b95ddcc2d32bf697b5480554b45f92dbe48beb6c$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_READ_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_READ_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_stream_capi.h"
#include "include/cef_stream.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefReadHandlerCToCpp : public CefCToCppRefCounted<CefReadHandlerCToCpp,
                                                        CefReadHandler,
                                                        cef_read_handler_t> {
 public:
  CefReadHandlerCToCpp();
  virtual ~CefReadHandlerCToCpp();

  // CefReadHandler methods.
  size_t Read(void* ptr, size_t size, size_t n) override;
  int Seek(int64 offset, int whence) override;
  int64 Tell() override;
  int Eof() override;
  bool MayBlock() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_READ_HANDLER_CTOCPP_H_
