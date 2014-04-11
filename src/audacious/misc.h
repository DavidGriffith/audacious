/*
 * misc.h
 * Copyright 2010-2012 John Lindgren
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions, and the following disclaimer in the documentation
 *    provided with the distribution.
 *
 * This software is provided "as is" and without any warranty, express or
 * implied. In no event shall the authors be liable for any damages arising from
 * the use of this software.
 */

#ifndef AUDACIOUS_MISC_H
#define AUDACIOUS_MISC_H

#include <audacious/api.h>
#include <libaudcore/index.h>
#include <libaudcore/tuple.h>
#include <libaudcore/vfs.h>

enum {OUTPUT_RESET_EFFECTS_ONLY, OUTPUT_RESET_SOFT, OUTPUT_RESET_HARD};

enum {
 AUD_MENU_MAIN,
 AUD_MENU_PLAYLIST,
 AUD_MENU_PLAYLIST_ADD,
 AUD_MENU_PLAYLIST_REMOVE,
 AUD_MENU_COUNT};

typedef void (* MenuFunc) (void);

enum {
 AUD_VIS_TYPE_CLEAR,        /* like VisPlugin::clear() */
 AUD_VIS_TYPE_MONO_PCM,     /* like VisPlugin::render_mono_pcm() */
 AUD_VIS_TYPE_MULTI_PCM,    /* like VisPlugin::render_multi_pcm() */
 AUD_VIS_TYPE_FREQ,         /* like VisPlugin::render_freq() */
 AUD_VIS_TYPES};

/* generic type; does not correspond to actual function types */
typedef void (* VisFunc) (void);

#define AUD_API_NAME MiscAPI
#define AUD_API_SYMBOL misc_api

#ifdef _AUDACIOUS_CORE

#include "api-local-begin.h"
#include "misc-api.h"
#include "api-local-end.h"

#else

#include <audacious/api-define-begin.h>
#include <audacious/misc-api.h>
#include <audacious/api-define-end.h>

#include <audacious/api-alias-begin.h>
#include <audacious/misc-api.h>
#include <audacious/api-alias-end.h>

#endif

#undef AUD_API_NAME
#undef AUD_API_SYMBOL

#endif

#ifdef AUD_API_DECLARE

#define AUD_API_NAME MiscAPI
#define AUD_API_SYMBOL misc_api

#include "api-define-begin.h"
#include "misc-api.h"
#include "api-define-end.h"

#include "api-declare-begin.h"
#include "misc-api.h"
#include "api-declare-end.h"

#undef AUD_API_NAME
#undef AUD_API_SYMBOL

#endif
