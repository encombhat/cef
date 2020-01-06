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
// $hash=ed06de1cd3a6c8b6669671c9e9d348f2e42c41db$
//

#include "libcef_dll/ctocpp/keyboard_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefKeyboardHandlerCToCpp::OnPreKeyEvent(CefRefPtr<CefBrowser> browser,
                                             const CefKeyEvent& event,
                                             CefEventHandle os_event,
                                             bool* is_keyboard_shortcut) {
  shutdown_checker::AssertNotShutdown();

  cef_keyboard_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_pre_key_event))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: is_keyboard_shortcut; type: bool_byaddr
  DCHECK(is_keyboard_shortcut);
  if (!is_keyboard_shortcut)
    return false;

  // Translate param: is_keyboard_shortcut; type: bool_byaddr
  int is_keyboard_shortcutInt =
      is_keyboard_shortcut ? *is_keyboard_shortcut : 0;

  // Execute
  int _retval =
      _struct->on_pre_key_event(_struct, CefBrowserCppToC::Wrap(browser),
                                &event, os_event, &is_keyboard_shortcutInt);

  // Restore param:is_keyboard_shortcut; type: bool_byaddr
  if (is_keyboard_shortcut)
    *is_keyboard_shortcut = is_keyboard_shortcutInt ? true : false;

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefKeyboardHandlerCToCpp::OnKeyEvent(CefRefPtr<CefBrowser> browser,
                                          const CefKeyEvent& event,
                                          CefEventHandle os_event) {
  shutdown_checker::AssertNotShutdown();

  cef_keyboard_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_key_event))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = _struct->on_key_event(_struct, CefBrowserCppToC::Wrap(browser),
                                      &event, os_event);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefKeyboardHandlerCToCpp::CefKeyboardHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefKeyboardHandlerCToCpp::~CefKeyboardHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_keyboard_handler_t* CefCToCppRefCounted<
    CefKeyboardHandlerCToCpp,
    CefKeyboardHandler,
    cef_keyboard_handler_t>::UnwrapDerived(CefWrapperType type,
                                           CefKeyboardHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCToCppRefCounted<CefKeyboardHandlerCToCpp,
                                   CefKeyboardHandler,
                                   cef_keyboard_handler_t>::kWrapperType =
    WT_KEYBOARD_HANDLER;
