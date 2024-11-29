/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2023 Linux Mint
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street - Suite 500, Boston, MA 02110-1335, USA.
 *
 */

#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

#define CSD_TYPE_SETTINGS_REMAP_MANAGER         (csd_settings_remap_manager_get_type ())
G_DECLARE_FINAL_TYPE (CsdSettingsRemapManager, csd_settings_remap_manager, CSD, SETTINGS_REMAP_MANAGER, GObject)

CsdSettingsRemapManager *csd_settings_remap_manager_new                 (void);
gboolean                 csd_settings_remap_manager_start               (CsdSettingsRemapManager *manager,
                                                                       GError         **error);
void                     csd_settings_remap_manager_stop                (CsdSettingsRemapManager *manager);

G_END_DECLS
