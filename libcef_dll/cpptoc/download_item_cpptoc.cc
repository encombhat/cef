// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/download_item_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK download_item_is_valid(struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDownloadItemCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK download_item_is_in_progress(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDownloadItemCppToC::Get(self)->IsInProgress();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK download_item_is_complete(struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDownloadItemCppToC::Get(self)->IsComplete();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK download_item_is_canceled(struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDownloadItemCppToC::Get(self)->IsCanceled();

  // Return type: bool
  return _retval;
}

int64 CEF_CALLBACK download_item_get_current_speed(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int64 _retval = CefDownloadItemCppToC::Get(self)->GetCurrentSpeed();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK download_item_get_percent_complete(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefDownloadItemCppToC::Get(self)->GetPercentComplete();

  // Return type: simple
  return _retval;
}

int64 CEF_CALLBACK download_item_get_total_bytes(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int64 _retval = CefDownloadItemCppToC::Get(self)->GetTotalBytes();

  // Return type: simple
  return _retval;
}

int64 CEF_CALLBACK download_item_get_received_bytes(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int64 _retval = CefDownloadItemCppToC::Get(self)->GetReceivedBytes();

  // Return type: simple
  return _retval;
}

cef_time_t CEF_CALLBACK download_item_get_start_time(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefTime();

  // Execute
  cef_time_t _retval = CefDownloadItemCppToC::Get(self)->GetStartTime();

  // Return type: simple
  return _retval;
}

cef_time_t CEF_CALLBACK download_item_get_end_time(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefTime();

  // Execute
  cef_time_t _retval = CefDownloadItemCppToC::Get(self)->GetEndTime();

  // Return type: simple
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK download_item_get_full_path(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDownloadItemCppToC::Get(self)->GetFullPath();

  // Return type: string
  return _retval.DetachToUserFree();
}

uint32 CEF_CALLBACK download_item_get_id(struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  uint32 _retval = CefDownloadItemCppToC::Get(self)->GetId();

  // Return type: simple
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK download_item_get_url(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDownloadItemCppToC::Get(self)->GetURL();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK download_item_get_suggested_file_name(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDownloadItemCppToC::Get(self)->GetSuggestedFileName();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK download_item_get_content_disposition(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDownloadItemCppToC::Get(self)->GetContentDisposition();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK download_item_get_mime_type(
    struct _cef_download_item_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDownloadItemCppToC::Get(self)->GetMimeType();

  // Return type: string
  return _retval.DetachToUserFree();
}


// CONSTRUCTOR - Do not edit by hand.

CefDownloadItemCppToC::CefDownloadItemCppToC(CefDownloadItem* cls)
    : CefCppToC<CefDownloadItemCppToC, CefDownloadItem, cef_download_item_t>(
        cls) {
  struct_.struct_.is_valid = download_item_is_valid;
  struct_.struct_.is_in_progress = download_item_is_in_progress;
  struct_.struct_.is_complete = download_item_is_complete;
  struct_.struct_.is_canceled = download_item_is_canceled;
  struct_.struct_.get_current_speed = download_item_get_current_speed;
  struct_.struct_.get_percent_complete = download_item_get_percent_complete;
  struct_.struct_.get_total_bytes = download_item_get_total_bytes;
  struct_.struct_.get_received_bytes = download_item_get_received_bytes;
  struct_.struct_.get_start_time = download_item_get_start_time;
  struct_.struct_.get_end_time = download_item_get_end_time;
  struct_.struct_.get_full_path = download_item_get_full_path;
  struct_.struct_.get_id = download_item_get_id;
  struct_.struct_.get_url = download_item_get_url;
  struct_.struct_.get_suggested_file_name =
      download_item_get_suggested_file_name;
  struct_.struct_.get_content_disposition =
      download_item_get_content_disposition;
  struct_.struct_.get_mime_type = download_item_get_mime_type;
}

#ifndef NDEBUG
template<> long CefCppToC<CefDownloadItemCppToC, CefDownloadItem,
    cef_download_item_t>::DebugObjCt = 0;
#endif

