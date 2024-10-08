// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "sdkconfig.h"
// clang-format off

// framebuffer
#if defined(CONFIG_ENABLE_RGB_MATRIX_TYPING_HEATMAP) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_DIGITAL_RAIN)
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif

// reactive
#if defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SPLASH) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_MULTISPLASH) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_SPLASH) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS) || \
    defined(CONFIG_ENABLE_RGB_MATRIX_SOLID_MULTISPLASH)
#    define RGB_MATRIX_KEYPRESSES
#endif

#ifndef  RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif

#ifndef  RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_KEYPRESSES
#endif
