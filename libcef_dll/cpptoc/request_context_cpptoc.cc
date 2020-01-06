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
// $hash=ca9c8f821e2e25b7c7f2ad6d1bb323a79eb8b053$
//

#include "libcef_dll/cpptoc/request_context_cpptoc.h"
#include "libcef_dll/cpptoc/cookie_manager_cpptoc.h"
#include "libcef_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libcef_dll/cpptoc/extension_cpptoc.h"
#include "libcef_dll/cpptoc/value_cpptoc.h"
#include "libcef_dll/ctocpp/completion_callback_ctocpp.h"
#include "libcef_dll/ctocpp/extension_handler_ctocpp.h"
#include "libcef_dll/ctocpp/request_context_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resolve_callback_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_handler_factory_ctocpp.h"
#include "libcef_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_request_context_t* cef_request_context_get_global_context() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefRequestContext> _retval = CefRequestContext::GetGlobalContext();

  // Return type: refptr_same
  return CefRequestContextCppToC::Wrap(_retval);
}

CEF_EXPORT cef_request_context_t* cef_request_context_create_context(
    const struct _cef_request_context_settings_t* settings,
    struct _cef_request_context_handler_t* handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return NULL;
  // Unverified params: handler

  // Translate param: settings; type: struct_byref_const
  CefRequestContextSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  CefRefPtr<CefRequestContext> _retval = CefRequestContext::CreateContext(
      settingsObj, CefRequestContextHandlerCToCpp::Wrap(handler));

  // Return type: refptr_same
  return CefRequestContextCppToC::Wrap(_retval);
}

CEF_EXPORT cef_request_context_t* cef_create_context_shared(
    cef_request_context_t* other,
    struct _cef_request_context_handler_t* handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: other; type: refptr_same
  DCHECK(other);
  if (!other)
    return NULL;
  // Unverified params: handler

  // Execute
  CefRefPtr<CefRequestContext> _retval = CefRequestContext::CreateContext(
      CefRequestContextCppToC::Unwrap(other),
      CefRequestContextHandlerCToCpp::Wrap(handler));

  // Return type: refptr_same
  return CefRequestContextCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK request_context_is_same(struct _cef_request_context_t* self,
                                         struct _cef_request_context_t* other) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: other; type: refptr_same
  DCHECK(other);
  if (!other)
    return 0;

  // Execute
  bool _retval = CefRequestContextCppToC::Get(self)->IsSame(
      CefRequestContextCppToC::Unwrap(other));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
request_context_is_sharing_with(struct _cef_request_context_t* self,
                                struct _cef_request_context_t* other) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: other; type: refptr_same
  DCHECK(other);
  if (!other)
    return 0;

  // Execute
  bool _retval = CefRequestContextCppToC::Get(self)->IsSharingWith(
      CefRequestContextCppToC::Unwrap(other));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
request_context_is_global(struct _cef_request_context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefRequestContextCppToC::Get(self)->IsGlobal();

  // Return type: bool
  return _retval;
}

struct _cef_request_context_handler_t* CEF_CALLBACK
request_context_get_handler(struct _cef_request_context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefRequestContextHandler> _retval =
      CefRequestContextCppToC::Get(self)->GetHandler();

  // Return type: refptr_diff
  return CefRequestContextHandlerCToCpp::Unwrap(_retval);
}

cef_string_userfree_t CEF_CALLBACK
request_context_get_cache_path(struct _cef_request_context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefRequestContextCppToC::Get(self)->GetCachePath();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_cookie_manager_t* CEF_CALLBACK
request_context_get_cookie_manager(struct _cef_request_context_t* self,
                                   cef_completion_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Unverified params: callback

  // Execute
  CefRefPtr<CefCookieManager> _retval =
      CefRequestContextCppToC::Get(self)->GetCookieManager(
          CefCompletionCallbackCToCpp::Wrap(callback));

  // Return type: refptr_same
  return CefCookieManagerCppToC::Wrap(_retval);
}

int CEF_CALLBACK request_context_register_scheme_handler_factory(
    struct _cef_request_context_t* self,
    const cef_string_t* scheme_name,
    const cef_string_t* domain_name,
    struct _cef_scheme_handler_factory_t* factory) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: scheme_name; type: string_byref_const
  DCHECK(scheme_name);
  if (!scheme_name)
    return 0;
  // Unverified params: domain_name, factory

  // Execute
  bool _retval =
      CefRequestContextCppToC::Get(self)->RegisterSchemeHandlerFactory(
          CefString(scheme_name), CefString(domain_name),
          CefSchemeHandlerFactoryCToCpp::Wrap(factory));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK request_context_clear_scheme_handler_factories(
    struct _cef_request_context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefRequestContextCppToC::Get(self)->ClearSchemeHandlerFactories();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
request_context_purge_plugin_list_cache(struct _cef_request_context_t* self,
                                        int reload_pages) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefRequestContextCppToC::Get(self)->PurgePluginListCache(
      reload_pages ? true : false);
}

int CEF_CALLBACK
request_context_has_preference(struct _cef_request_context_t* self,
                               const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return 0;

  // Execute
  bool _retval =
      CefRequestContextCppToC::Get(self)->HasPreference(CefString(name));

  // Return type: bool
  return _retval;
}

struct _cef_value_t* CEF_CALLBACK
request_context_get_preference(struct _cef_request_context_t* self,
                               const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return NULL;

  // Execute
  CefRefPtr<CefValue> _retval =
      CefRequestContextCppToC::Get(self)->GetPreference(CefString(name));

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

struct _cef_dictionary_value_t* CEF_CALLBACK
request_context_get_all_preferences(struct _cef_request_context_t* self,
                                    int include_defaults) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDictionaryValue> _retval =
      CefRequestContextCppToC::Get(self)->GetAllPreferences(
          include_defaults ? true : false);

  // Return type: refptr_same
  return CefDictionaryValueCppToC::Wrap(_retval);
}

int CEF_CALLBACK
request_context_can_set_preference(struct _cef_request_context_t* self,
                                   const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return 0;

  // Execute
  bool _retval =
      CefRequestContextCppToC::Get(self)->CanSetPreference(CefString(name));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
request_context_set_preference(struct _cef_request_context_t* self,
                               const cef_string_t* name,
                               struct _cef_value_t* value,
                               cef_string_t* error) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return 0;
  // Verify param: error; type: string_byref
  DCHECK(error);
  if (!error)
    return 0;
  // Unverified params: value

  // Translate param: error; type: string_byref
  CefString errorStr(error);

  // Execute
  bool _retval = CefRequestContextCppToC::Get(self)->SetPreference(
      CefString(name), CefValueCppToC::Unwrap(value), errorStr);

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK request_context_clear_certificate_exceptions(
    struct _cef_request_context_t* self,
    cef_completion_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: callback

  // Execute
  CefRequestContextCppToC::Get(self)->ClearCertificateExceptions(
      CefCompletionCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK request_context_clear_http_auth_credentials(
    struct _cef_request_context_t* self,
    cef_completion_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: callback

  // Execute
  CefRequestContextCppToC::Get(self)->ClearHttpAuthCredentials(
      CefCompletionCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
request_context_close_all_connections(struct _cef_request_context_t* self,
                                      cef_completion_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: callback

  // Execute
  CefRequestContextCppToC::Get(self)->CloseAllConnections(
      CefCompletionCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
request_context_resolve_host(struct _cef_request_context_t* self,
                             const cef_string_t* origin,
                             cef_resolve_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: origin; type: string_byref_const
  DCHECK(origin);
  if (!origin)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return;

  // Execute
  CefRequestContextCppToC::Get(self)->ResolveHost(
      CefString(origin), CefResolveCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
request_context_load_extension(struct _cef_request_context_t* self,
                               const cef_string_t* root_directory,
                               struct _cef_dictionary_value_t* manifest,
                               cef_extension_handler_t* handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: root_directory; type: string_byref_const
  DCHECK(root_directory);
  if (!root_directory)
    return;
  // Unverified params: manifest, handler

  // Execute
  CefRequestContextCppToC::Get(self)->LoadExtension(
      CefString(root_directory), CefDictionaryValueCppToC::Unwrap(manifest),
      CefExtensionHandlerCToCpp::Wrap(handler));
}

int CEF_CALLBACK
request_context_did_load_extension(struct _cef_request_context_t* self,
                                   const cef_string_t* extension_id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: extension_id; type: string_byref_const
  DCHECK(extension_id);
  if (!extension_id)
    return 0;

  // Execute
  bool _retval = CefRequestContextCppToC::Get(self)->DidLoadExtension(
      CefString(extension_id));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
request_context_has_extension(struct _cef_request_context_t* self,
                              const cef_string_t* extension_id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: extension_id; type: string_byref_const
  DCHECK(extension_id);
  if (!extension_id)
    return 0;

  // Execute
  bool _retval =
      CefRequestContextCppToC::Get(self)->HasExtension(CefString(extension_id));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
request_context_get_extensions(struct _cef_request_context_t* self,
                               cef_string_list_t extension_ids) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: extension_ids; type: string_vec_byref
  DCHECK(extension_ids);
  if (!extension_ids)
    return 0;

  // Translate param: extension_ids; type: string_vec_byref
  std::vector<CefString> extension_idsList;
  transfer_string_list_contents(extension_ids, extension_idsList);

  // Execute
  bool _retval =
      CefRequestContextCppToC::Get(self)->GetExtensions(extension_idsList);

  // Restore param: extension_ids; type: string_vec_byref
  cef_string_list_clear(extension_ids);
  transfer_string_list_contents(extension_idsList, extension_ids);

  // Return type: bool
  return _retval;
}

cef_extension_t* CEF_CALLBACK
request_context_get_extension(struct _cef_request_context_t* self,
                              const cef_string_t* extension_id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: extension_id; type: string_byref_const
  DCHECK(extension_id);
  if (!extension_id)
    return NULL;

  // Execute
  CefRefPtr<CefExtension> _retval =
      CefRequestContextCppToC::Get(self)->GetExtension(CefString(extension_id));

  // Return type: refptr_same
  return CefExtensionCppToC::Wrap(_retval);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRequestContextCppToC::CefRequestContextCppToC() {
  GetStruct()->is_same = request_context_is_same;
  GetStruct()->is_sharing_with = request_context_is_sharing_with;
  GetStruct()->is_global = request_context_is_global;
  GetStruct()->get_handler = request_context_get_handler;
  GetStruct()->get_cache_path = request_context_get_cache_path;
  GetStruct()->get_cookie_manager = request_context_get_cookie_manager;
  GetStruct()->register_scheme_handler_factory =
      request_context_register_scheme_handler_factory;
  GetStruct()->clear_scheme_handler_factories =
      request_context_clear_scheme_handler_factories;
  GetStruct()->purge_plugin_list_cache =
      request_context_purge_plugin_list_cache;
  GetStruct()->has_preference = request_context_has_preference;
  GetStruct()->get_preference = request_context_get_preference;
  GetStruct()->get_all_preferences = request_context_get_all_preferences;
  GetStruct()->can_set_preference = request_context_can_set_preference;
  GetStruct()->set_preference = request_context_set_preference;
  GetStruct()->clear_certificate_exceptions =
      request_context_clear_certificate_exceptions;
  GetStruct()->clear_http_auth_credentials =
      request_context_clear_http_auth_credentials;
  GetStruct()->close_all_connections = request_context_close_all_connections;
  GetStruct()->resolve_host = request_context_resolve_host;
  GetStruct()->load_extension = request_context_load_extension;
  GetStruct()->did_load_extension = request_context_did_load_extension;
  GetStruct()->has_extension = request_context_has_extension;
  GetStruct()->get_extensions = request_context_get_extensions;
  GetStruct()->get_extension = request_context_get_extension;
}

// DESTRUCTOR - Do not edit by hand.

CefRequestContextCppToC::~CefRequestContextCppToC() {}

template <>
CefRefPtr<CefRequestContext> CefCppToCRefCounted<
    CefRequestContextCppToC,
    CefRequestContext,
    cef_request_context_t>::UnwrapDerived(CefWrapperType type,
                                          cef_request_context_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCppToCRefCounted<CefRequestContextCppToC,
                                   CefRequestContext,
                                   cef_request_context_t>::kWrapperType =
    WT_REQUEST_CONTEXT;
