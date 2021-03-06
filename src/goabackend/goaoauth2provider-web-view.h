/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */
/*
 * Copyright (C) 2016 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#if !defined (__GOA_BACKEND_INSIDE_GOA_BACKEND_H__) && !defined (GOA_BACKEND_COMPILATION)
#error "Only <goabackend/goabackend.h> can be included directly."
#endif

#ifndef __GOA_OAUTH2_PROVIDER_WEB_VIEW_H__
#define __GOA_OAUTH2_PROVIDER_WEB_VIEW_H__

#include <goabackend/goaoauth2provider.h>
#include <webkit2/webkit2.h>

G_BEGIN_DECLS

gboolean     goa_oauth2_provider_decide_navigation_policy     (GoaOAuth2Provider              *provider,
                                                               WebKitWebView                  *web_view,
                                                               WebKitNavigationPolicyDecision *decision);

G_END_DECLS

#endif /* __GOA_OAUTH2_PROVIDER_WEB_VIEW_H__ */
