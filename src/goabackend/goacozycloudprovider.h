/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */
/*
 * Copyright (C) 2012 Red Hat, Inc.
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

#ifndef __GOA_COZYCLOUD_PROVIDER_H__
#define __GOA_COZYCLOUD_PROVIDER_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define GOA_TYPE_COZYCLOUD_PROVIDER   (goa_cozycloud_provider_get_type ())
#define GOA_COZYCLOUD_PROVIDER(o)     (G_TYPE_CHECK_INSTANCE_CAST ((o), GOA_TYPE_COZYCLOUD_PROVIDER, GoaCozycloudProvider))
#define GOA_IS_COZYCLOUD_PROVIDER(o)  (G_TYPE_CHECK_INSTANCE_TYPE ((o), GOA_TYPE_COZYCLOUD_PROVIDER))

typedef struct _GoaCozycloudProvider GoaCozycloudProvider;

GType goa_cozycloud_provider_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* __GOA_COZYCLOUD_PROVIDER_H__ */
