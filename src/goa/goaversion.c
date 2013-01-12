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
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: Debarshi Ray <debarshir@gnome.org>
 */

#include "config.h"
#include "goaversion.h"

/**
 * SECTION:goaversion
 * @Title: Version Information
 * @Short_description: variables and functions to check the GOA version
 *
 * GOA provides version information, primarily useful in configure
 * checks for builds that have a configure script. Applications will
 * not typically use the features described here.
 */

/**
 * GOA_MAJOR_VERSION:
 *
 * The major version number of the GOA daemon and library.
 *
 * Like #goa_major_version, but from the headers used at
 * application compile time, rather than from the library
 * linked against at application run time.
 *
 * Since: 3.8
 */

/**
 * GOA_MINOR_VERSION:
 *
 * The minor version number of the GOA daemon and library.
 *
 * Like #goa_minor_version, but from the headers used at
 * application compile time, rather than from the library
 * linked against at application run time.
 *
 * Since: 3.8
 */

/**
 * GOA_MICRO_VERSION:
 *
 * The micro version number of the GOA daemon and library.
 *
 * Like #goa_micro_version, but from the headers used at
 * application compile time, rather than from the library
 * linked against at application run time.
 *
 * Since: 3.8
 */

/**
 * GOA_CHECK_VERSION:
 * @major: the major version to check for
 * @minor: the minor version to check for
 * @micro: the micro version to check for
 *
 * Checks the version of the GOA library that is being compiled
 * against.
 *
 * <example>
 * <title>Checking the version of the GOA library</title>
 * <programlisting>
 *   if (!GOA_CHECK_VERSION (3, 8, 0))
 *     g_error ("GOA version 3.8.0 or above is needed");
 * </programlisting>
 * </example>
 *
 * See goa_check_version() for a runtime check.
 *
 * Returns: %TRUE if the version of the GOA header files
 * is the same as or newer than the passed-in version.
 *
 * Since: 3.8
 */

const guint goa_major_version = GOA_MAJOR_VERSION;
const guint goa_minor_version = GOA_MINOR_VERSION;
const guint goa_micro_version = GOA_MICRO_VERSION;

/**
 * goa_check_version:
 * @required_major: the required major version.
 * @required_minor: the required minor version.
 * @required_micro: the required micro version.
 *
 * Checks that the GOA library in use is compatible with the
 * given version. Generally you would pass in the constants
 * #GOA_MAJOR_VERSION, #GOA_MINOR_VERSION, #GOA_MICRO_VERSION
 * as the three arguments to this function; that produces
 * a check that the library in use is compatible with
 * the version of GOA the application or module was compiled
 * against.
 *
 * Compatibility is defined by two things: first the version
 * of the running library is newer than the version
 * @required_major.@required_minor.@required_micro. Second
 * the running library must be binary compatible with the
 * version @required_major.@required_minor.@required_micro
 * (same major and minor version).
 *
 * Return value: %NULL if the GOA library is compatible with the
 *   given version, or a string describing the version mismatch.
 *   The returned string is owned by GOA and must not be modified
 *   or freed.
 *
 * Since: 3.8
 */
const gchar *
goa_check_version (guint required_major,
                   guint required_minor,
                   guint required_micro)
{
  if (required_major > GOA_MAJOR_VERSION)
    return "GOA version too old (major mismatch)";
  if (required_major < GOA_MAJOR_VERSION)
    return "GOA version too new (major mismatch)";
  if (required_minor > GOA_MINOR_VERSION)
    return "GOA version too old (minor mismatch)";
  if (required_minor < GOA_MINOR_VERSION)
    return "GOA version too new (minor mismatch)";
  if (required_micro > GOA_MICRO_VERSION)
    return "GOA version too old (micro mismatch)";
  return NULL;
}