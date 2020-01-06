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
// $hash=fbb4ca7d80f07a06f32d9383aa173fae0d9eefd5$
//

#include "libcef_dll/ctocpp/display_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefDisplayHandlerCToCpp::OnAddressChange(CefRefPtr<CefBrowser> browser,
                                              CefRefPtr<CefFrame> frame,
                                              const CefString& url) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_address_change))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;

  // Execute
  _struct->on_address_change(_struct, CefBrowserCppToC::Wrap(browser),
                             CefFrameCppToC::Wrap(frame), url.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefDisplayHandlerCToCpp::OnTitleChange(CefRefPtr<CefBrowser> browser,
                                            const CefString& title) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_title_change))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Unverified params: title

  // Execute
  _struct->on_title_change(_struct, CefBrowserCppToC::Wrap(browser),
                           title.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefDisplayHandlerCToCpp::OnFaviconURLChange(
    CefRefPtr<CefBrowser> browser,
    const std::vector<CefString>& icon_urls) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_favicon_urlchange))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Unverified params: icon_urls

  // Translate param: icon_urls; type: string_vec_byref_const
  cef_string_list_t icon_urlsList = cef_string_list_alloc();
  DCHECK(icon_urlsList);
  if (icon_urlsList)
    transfer_string_list_contents(icon_urls, icon_urlsList);

  // Execute
  _struct->on_favicon_urlchange(_struct, CefBrowserCppToC::Wrap(browser),
                                icon_urlsList);

  // Restore param:icon_urls; type: string_vec_byref_const
  if (icon_urlsList)
    cef_string_list_free(icon_urlsList);
}

NO_SANITIZE("cfi-icall")
void CefDisplayHandlerCToCpp::OnFullscreenModeChange(
    CefRefPtr<CefBrowser> browser,
    bool fullscreen) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_fullscreen_mode_change))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_fullscreen_mode_change(_struct, CefBrowserCppToC::Wrap(browser),
                                     fullscreen);
}

NO_SANITIZE("cfi-icall")
bool CefDisplayHandlerCToCpp::OnTooltip(CefRefPtr<CefBrowser> browser,
                                        CefString& text) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_tooltip))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Unverified params: text

  // Execute
  int _retval = _struct->on_tooltip(_struct, CefBrowserCppToC::Wrap(browser),
                                    text.GetWritableStruct());

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefDisplayHandlerCToCpp::OnStatusMessage(CefRefPtr<CefBrowser> browser,
                                              const CefString& value) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_status_message))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Unverified params: value

  // Execute
  _struct->on_status_message(_struct, CefBrowserCppToC::Wrap(browser),
                             value.GetStruct());
}

NO_SANITIZE("cfi-icall")
bool CefDisplayHandlerCToCpp::OnConsoleMessage(CefRefPtr<CefBrowser> browser,
                                               cef_log_severity_t level,
                                               const CefString& message,
                                               const CefString& source,
                                               int line) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_console_message))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Unverified params: message, source

  // Execute
  int _retval = _struct->on_console_message(
      _struct, CefBrowserCppToC::Wrap(browser), level, message.GetStruct(),
      source.GetStruct(), line);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefDisplayHandlerCToCpp::OnAutoResize(CefRefPtr<CefBrowser> browser,
                                           const CefSize& new_size) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_auto_resize))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = _struct->on_auto_resize(
      _struct, CefBrowserCppToC::Wrap(browser), &new_size);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefDisplayHandlerCToCpp::OnLoadingProgressChange(
    CefRefPtr<CefBrowser> browser,
    double progress) {
  shutdown_checker::AssertNotShutdown();

  cef_display_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_loading_progress_change))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_loading_progress_change(_struct, CefBrowserCppToC::Wrap(browser),
                                      progress);
}

// CONSTRUCTOR - Do not edit by hand.

CefDisplayHandlerCToCpp::CefDisplayHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDisplayHandlerCToCpp::~CefDisplayHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_display_handler_t* CefCToCppRefCounted<
    CefDisplayHandlerCToCpp,
    CefDisplayHandler,
    cef_display_handler_t>::UnwrapDerived(CefWrapperType type,
                                          CefDisplayHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCToCppRefCounted<CefDisplayHandlerCToCpp,
                                   CefDisplayHandler,
                                   cef_display_handler_t>::kWrapperType =
    WT_DISPLAY_HANDLER;
