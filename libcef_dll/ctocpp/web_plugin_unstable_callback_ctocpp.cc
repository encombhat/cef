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
// $hash=bc1835abc05dd115c2aa4a5ea49e1c2db05fe973$
//

#include "libcef_dll/ctocpp/web_plugin_unstable_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefWebPluginUnstableCallbackCToCpp::IsUnstable(const CefString& path,
                                                    bool unstable) {
  shutdown_checker::AssertNotShutdown();

  cef_web_plugin_unstable_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_unstable))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(!path.empty());
  if (path.empty())
    return;

  // Execute
  _struct->is_unstable(_struct, path.GetStruct(), unstable);
}

// CONSTRUCTOR - Do not edit by hand.

CefWebPluginUnstableCallbackCToCpp::CefWebPluginUnstableCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefWebPluginUnstableCallbackCToCpp::~CefWebPluginUnstableCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_web_plugin_unstable_callback_t*
CefCToCppRefCounted<CefWebPluginUnstableCallbackCToCpp,
                    CefWebPluginUnstableCallback,
                    cef_web_plugin_unstable_callback_t>::
    UnwrapDerived(CefWrapperType type, CefWebPluginUnstableCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefWebPluginUnstableCallbackCToCpp,
                        CefWebPluginUnstableCallback,
                        cef_web_plugin_unstable_callback_t>::kWrapperType =
        WT_WEB_PLUGIN_UNSTABLE_CALLBACK;
