/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FORCE_NKRO
//https://github.com/samhocevar-forks/qmk-firmware/blob/master/keyboards/westfoxtrot/cyclops/config.h
#undef IS_COMMAND
#define IS_COMMAND() (get_mods() == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT) | MOD_BIT(KC_LCTRL)))

//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
#define AUDIO_CLICKY

#ifdef RGBLIGHT_ENABLE
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgblight.md
// https://github.com/qmk/qmk_firmware/blob/79d5b279931cf98d635181235c0301ba7053f9d5/keyboards/planck/keymaps/rootiest/config.h
//#    define RGBLIGHT_SLEEP                    // Allows rgb to sleep when the host/keyboard does
#    define RGBLIGHT_ANIMATIONS               // Enable using rgb animations
#    define RGBLIGHT_LAYERS                   // Enable indicating layers using layered rgb assignments
#    define RGBLIGHT_LAYER_BLINK              // Allows rgb layers to be blinked (activate for a set amount of time)
#    define RGBLIGHT_MAX_LAYERS 32            // Overides the default (8) max number of rgb layers
#    define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF  // Allows rgb layers to work even when rgb is toggled off
#endif

#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(PREONIC_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(ROCK_A_BYE_BABY), SONG(WORKMAN_SOUND) }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
