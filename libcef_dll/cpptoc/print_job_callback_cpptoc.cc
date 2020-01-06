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
// $hash=f96749c9b92e6029490e08806b5bea95b130581e$
//

#include "libcef_dll/cpptoc/print_job_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
print_job_callback_cont(struct _cef_print_job_callback_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefPrintJobCallbackCppToC::Get(self)->Continue();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefPrintJobCallbackCppToC::CefPrintJobCallbackCppToC() {
  GetStruct()->cont = print_job_callback_cont;
}

// DESTRUCTOR - Do not edit by hand.

CefPrintJobCallbackCppToC::~CefPrintJobCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefPrintJobCallback> CefCppToCRefCounted<
    CefPrintJobCallbackCppToC,
    CefPrintJobCallback,
    cef_print_job_callback_t>::UnwrapDerived(CefWrapperType type,
                                             cef_print_job_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCppToCRefCounted<CefPrintJobCallbackCppToC,
                                   CefPrintJobCallback,
                                   cef_print_job_callback_t>::kWrapperType =
    WT_PRINT_JOB_CALLBACK;
