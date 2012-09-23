/*
 * arch/arm/mach-tegra/include/mach/hardware.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@google.com>
 *	Erik Gilling <konkers@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MACH_TEGRA_HARDWARE_H
#define __MACH_TEGRA_HARDWARE_H

#if defined(CONFIG_ICS)
enum tegra_chipid {
        TEGRA_CHIPID_UNKNOWN = 0,
        TEGRA_CHIPID_TEGRA2 = 0x20,
        TEGRA_CHIPID_TEGRA3 = 0x30,
};

enum tegra_revision {
        TEGRA_REVISION_UNKNOWN = 0,
        TEGRA_REVISION_A01,
        TEGRA_REVISION_A02,
        TEGRA_REVISION_A03,
#if defined(CONFIG_ARCH_TEGRA_2x_SOC)
        TEGRA_REVISION_A03p,
#endif
        TEGRA_REVISION_MAX,
};

enum tegra_chipid tegra_get_chipid(void);
enum tegra_revision tegra_get_revision(void);
#endif

#endif
