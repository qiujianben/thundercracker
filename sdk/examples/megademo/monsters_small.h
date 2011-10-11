/*
 * Prof. Engd's Étagère of Hypnopompic Hexadecimal Miniature Monsters
 * http://monster.tacolab.com
 *
 * Copyright <c> 2009 Taco Lab LLC.
 * Licensed under a Creative Commons license:
 * http://creativecommons.org/licenses/by-nc-sa/3.0/us/
 */

#ifndef _MONSTER_H
#define _MONSTER_H

#include <stdint.h>

struct MonsterData {
    uint8_t fb[512 + 32];
};

// #13 -- Mr_Pink
static const struct MonsterData Mr_Pink = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x80, 0x08, 0x00, 0x00, 0x80, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x28, 0x08, 0x00, 0x00, 0x80, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x80, 0x22, 0x08, 0x00, 0x00, 0x40, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x80, 0x22, 0x08, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x80, 0x22, 0x08, 0x00, 0x00, 0x28, 0x22, 0x22, 0x86, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x28, 0x22, 0x08, 0x00, 0x80, 0x22, 0x22, 0x22, 0x62, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x28, 0x22, 0x88, 0x00, 0x88, 0x82, 0x22, 0x82, 0x62, 0x86, 0x08, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x28, 0x22, 0x82, 0x08, 0x28, 0x22, 0x22, 0x22, 0x22, 0x66, 0x88, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x28, 0x22, 0x22, 0x88, 0x28, 0x82, 0x88, 0x88, 0x22, 0x62, 0x86, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x28, 0x22, 0x22, 0x22, 0x22, 0x82, 0x88, 0x88, 0x22, 0x22, 0x66, 0x88, 0x00, 0x00, 0x00,
     0x00, 0x28, 0x22, 0x22, 0x22, 0x22, 0x22, 0x88, 0x28, 0x22, 0x22, 0x62, 0x86, 0x08, 0x00, 0x00,
     0x00, 0x80, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x88, 0x00, 0x00,
     0x00, 0x80, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x28, 0x22, 0x62, 0x86, 0x00, 0x00,
     0x00, 0x80, 0x66, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x88, 0x22, 0x62, 0x86, 0x00, 0x00,
     0x00, 0x00, 0x68, 0x66, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x82, 0x22, 0x62, 0x86, 0x00, 0x00,
     0x00, 0x00, 0x80, 0x68, 0x26, 0x22, 0x22, 0x22, 0x22, 0x22, 0x88, 0x22, 0x66, 0x88, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x28, 0x22, 0x22, 0x22, 0x22, 0x22, 0x28, 0x62, 0x86, 0x08, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x28, 0x22, 0x22, 0x22, 0x22, 0x22, 0x28, 0x62, 0x88, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x28, 0x22, 0x22, 0x22, 0x22, 0x22, 0x88, 0x88, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x28, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x22, 0x62, 0x86, 0x88, 0x88, 0x22, 0x22, 0x66, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x22, 0x62, 0x08, 0x00, 0x80, 0x88, 0x22, 0x66, 0x88, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x80, 0x28, 0x22, 0x66, 0x08, 0x00, 0x00, 0x80, 0x22, 0x62, 0x86, 0x08, 0x00, 0x00,
     0x00, 0x00, 0x88, 0x22, 0x62, 0x86, 0x00, 0x00, 0x00, 0x80, 0x28, 0x22, 0x66, 0x88, 0x00, 0x00,
     0x00, 0x00, 0x28, 0x22, 0x66, 0x86, 0x00, 0x00, 0x00, 0x00, 0x28, 0x22, 0x62, 0x86, 0x00, 0x00,
     0x00, 0x00, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x88, 0x08, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0xfb,0xf5, 0x00,0x00, 0xff,0x3d, 0x00,0x00, 0xd3,0xfa, 0x00,0x00,
     0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};

// #59 -- Ichabod_Nibbs
static const struct MonsterData Ichabod_Nibbs = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x06, 0x00, 0x00,
     0x00, 0x60, 0x26, 0x22, 0x22, 0x26, 0x22, 0x22, 0x22, 0x22, 0x26, 0x22, 0x22, 0x66, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x22, 0x22, 0x62, 0x22, 0x22, 0x22, 0x62, 0x22, 0x22, 0x22, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x66, 0x66, 0x66, 0x26, 0x22, 0x22, 0x66, 0x66, 0x66, 0x26, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x06, 0x00, 0x00, 0x26, 0x66, 0x26, 0x06, 0x00, 0x00, 0x26, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x66, 0x06, 0x66, 0x04, 0x66, 0x66, 0x66, 0x06, 0x66, 0x04, 0x66, 0x66, 0x00, 0x00,
     0x00, 0x60, 0x66, 0x06, 0x66, 0x06, 0x66, 0x22, 0x62, 0x06, 0x66, 0x06, 0x66, 0x66, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x06, 0x66, 0x06, 0x26, 0x22, 0x22, 0x06, 0x66, 0x06, 0x26, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x06, 0x00, 0x00, 0x26, 0x22, 0x22, 0x06, 0x00, 0x00, 0x26, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x66, 0x66, 0x66, 0x26, 0x22, 0x22, 0x66, 0x66, 0x66, 0x26, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x22, 0x62, 0x66, 0x22, 0x66, 0x26, 0x62, 0x66, 0x22, 0x66, 0x26, 0x62, 0x00, 0x00,
     0x00, 0x60, 0x66, 0x66, 0x60, 0x66, 0x06, 0x66, 0x66, 0x60, 0x66, 0x06, 0x66, 0x66, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0x7a,0xaf, 0x00,0x00, 0xf7,0xc5, 0x00,0x00, 0x00,0x00, 0x00,0x00,
     0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};

// #145 -- Hurnold_Fobcakes
static const struct MonsterData Hurnold_Fobcakes = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0xe0, 0xee, 0xee, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0xee, 0xee, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0xe6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x62, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x62, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x62, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x62, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0xe2, 0x2e, 0x22, 0x22, 0x22, 0x22, 0x22, 0xe2, 0x2e, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0xe2, 0x2e, 0x22, 0x22, 0x22, 0x22, 0x22, 0xe2, 0x2e, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x66, 0x66, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x66, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0xc2, 0xac, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0xc2, 0xcc, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0x22, 0x2c, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0x22, 0x2c, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0x22, 0x22, 0x22, 0x22, 0x2c, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0xe0, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x2e, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x2e, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x2e, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x4e, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x88, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x4e, 0x44, 0x44, 0x44, 0x88, 0x44, 0x44, 0x44, 0x44, 0x44, 0x88, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x4e, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x88, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x4e, 0x44, 0x44, 0x44, 0x88, 0x44, 0x44, 0x44, 0x44, 0x44, 0x88, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x4e, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x88, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x4e, 0x44, 0x44, 0x44, 0x88, 0x44, 0x44, 0x44, 0x44, 0x44, 0x88, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x0e, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0x76,0xf6, 0x00,0x00, 0xb3,0x5f, 0x00,0x00, 0xcb,0xfb, 0x00,0x00,
     0x49,0x05, 0x00,0x00, 0x0c,0x63, 0x00,0x00, 0x01,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};

// #181 -- Hollister_Plough
static const struct MonsterData Hollister_Plough = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa4, 0xaa, 0xaa, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa4, 0xaa, 0xaa, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa4, 0xaa, 0xaa, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa4, 0xaa, 0xaa, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa4, 0xaa, 0xaa, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa4, 0xaa, 0xaa, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x68, 0x66, 0x66, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa4, 0xaa, 0xaa, 0xaa, 0xaa, 0x00,
     0x00, 0xa0, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x0a, 0x00,
     0x00, 0xa0, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x0a, 0xa0, 0xaa, 0xaa, 0xaa, 0x00, 0xa0, 0xaa, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0xa0, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0xa0, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x0a, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0xa0, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0xaa, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0xaa, 0x0a, 0x00, 0xa0, 0xaa, 0x00, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0xaa, 0x0a, 0x00, 0xa0, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x00, 0xa0, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xaa, 0x0a, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xa0, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xa0, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0xa0, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0x00, 0x2a, 0xa2, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0xa0, 0x00, 0x0a, 0x00,
     0x00, 0xa0, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xaa, 0xaa, 0xaa, 0x0a, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0xf7,0xc5, 0x00,0x00, 0x0c,0x63, 0x00,0x00, 0xc0,0x88, 0x00,0x00,
     0x05,0xa8, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};


// #509 -- Jiffy_Bobbert
static const struct MonsterData Jiffy_Bobbert = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xc8, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xc2, 0xac, 0xaa, 0xaa, 0xaa, 0x2a, 0xcc, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xcc, 0xac, 0xaa, 0xaa, 0xaa, 0xca, 0xcc, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xcc, 0xac, 0xaa, 0xaa, 0xaa, 0xca, 0xcc, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x8c, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xcc, 0x8c, 0xa8, 0xcc, 0xcc, 0xcc, 0xcc, 0xac, 0x8a, 0x88, 0xcc, 0x0c, 0x00, 0x00,
     0x00, 0xc0, 0x8c, 0x88, 0xa8, 0xaa, 0xac, 0xaa, 0xac, 0xaa, 0x8a, 0x88, 0x88, 0xcc, 0x00, 0x00,
     0x00, 0xcc, 0x88, 0x88, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x88, 0xc8, 0x0c, 0x00,
     0x00, 0x8c, 0x88, 0x88, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x88, 0x88, 0x0c, 0x00,
     0x00, 0x8c, 0xcc, 0x8c, 0x88, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x88, 0x88, 0xcc, 0x8c, 0x0c, 0x00,
     0x00, 0xcc, 0x00, 0xc0, 0x88, 0xa8, 0xaa, 0xaa, 0xaa, 0x8a, 0x88, 0x88, 0x0c, 0xc0, 0x0c, 0x00,
     0x00, 0x0c, 0x00, 0xc0, 0x88, 0x88, 0xaa, 0xaa, 0xaa, 0x88, 0x88, 0xc8, 0x00, 0x00, 0x0c, 0x00,
     0x00, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xcc, 0x0c, 0xc0, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xc0, 0x44, 0x44, 0x64, 0x0c, 0xc0, 0x44, 0x44, 0x64, 0x0c, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xcc, 0x0c, 0xc0, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0xf7,0xc5, 0x00,0x00, 0x0c,0x63, 0x00,0x00, 0x65,0x29, 0x00,0x00,
     0x1a,0xd8, 0x00,0x00, 0x11,0x90, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};

// #511 -- berserkers_n1_and_n2
static const struct MonsterData berserkers_n1_and_n2 = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x22, 0x22, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x11, 0x12, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x22, 0x22, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x22, 0x22, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x22, 0x22, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x10, 0x11, 0x00, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xc1, 0x66, 0x11, 0x11, 0x11, 0x81, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xc1, 0x66, 0x66, 0x66, 0x66, 0x16, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xc1, 0x66, 0x11, 0x11, 0x11, 0x81, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x10, 0x11, 0x00,
     0x00, 0x00, 0x10, 0x11, 0x00, 0x00, 0x10, 0x88, 0x88, 0x88, 0x18, 0x11, 0x11, 0x61, 0xc6, 0x01,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x88, 0x88, 0x88, 0x61, 0x66, 0x66, 0x66, 0xc6, 0x01,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x88, 0x88, 0x88, 0x18, 0x11, 0x11, 0x61, 0xc6, 0x01,
     0x00, 0x00, 0x00, 0x00, 0x11, 0x01, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x10, 0x11, 0x00,
     0x00, 0x00, 0x00, 0x10, 0x6c, 0x16, 0x11, 0x11, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x10, 0x6c, 0x66, 0x66, 0x66, 0x81, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x10, 0x6c, 0x16, 0x11, 0x11, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x11, 0x01, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x11, 0x01, 0x10, 0x88, 0x88, 0x88, 0x88, 0x11, 0x11, 0x66, 0x1c, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x88, 0x88, 0x88, 0x18, 0x66, 0x66, 0x66, 0x1c, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0x11, 0x11, 0x66, 0x1c, 0x00,
     0x00, 0x10, 0x11, 0x11, 0x00, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x11, 0x01, 0x00,
     0x00, 0x21, 0x22, 0x22, 0x01, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x21, 0x12, 0x12, 0x01, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x21, 0x22, 0x22, 0x01, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x10, 0x11, 0x11, 0x11, 0x11, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x10, 0x88, 0x88, 0x88, 0x1a, 0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x10, 0x88, 0x88, 0x88, 0x1a, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x00, 0x00, 0x00,
     0x10, 0x88, 0x88, 0x88, 0x1a, 0x00, 0x10, 0x44, 0x44, 0x44, 0x44, 0xe4, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x11, 0x11, 0x11, 0x01, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0x3f,0xa7, 0x00,0x00, 0x5f,0x04, 0x00,0x00, 0x0c,0x63, 0x00,0x00,
     0x80,0xa8, 0x00,0x00, 0xc0,0x88, 0x00,0x00, 0x65,0x29, 0x00,0x00, 0x1f,0x00, 0x00,0x00,
}};

// #513 -- Mike_Pocket
static const struct MonsterData Mike_Pocket = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x6c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xc6, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0xc0, 0xa6, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x6a, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x6c, 0xca, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xac, 0xc6, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xc0, 0xa6, 0x8c, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xc8, 0x6a, 0x0c, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xca, 0x88, 0xc8, 0xcc, 0xcc, 0xcc, 0xcc, 0x8c, 0x88, 0xac, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xc0, 0xcc, 0x2c, 0x02, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xc0, 0xcc, 0x2c, 0x02, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xc0, 0xcc, 0xcc, 0x0c, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xc0, 0xcc, 0xcc, 0x0c, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xc0, 0xcc, 0xcc, 0x0c, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xc0, 0xcc, 0xcc, 0x0c, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xcc, 0xcc, 0xcc, 0xcc, 0x8c, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x88, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x88, 0x88, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0x8c, 0x88, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0xc8, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0xcc, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xcc, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0x6c, 0xcc, 0xcc, 0x6c, 0x66, 0x66, 0x66, 0x66, 0xc6, 0xcc, 0xcc, 0xc6, 0x00, 0x00,
     0x00, 0x00, 0xac, 0x4c, 0x44, 0xac, 0xaa, 0xaa, 0xaa, 0xaa, 0xca, 0x44, 0xc4, 0xca, 0x00, 0x00,
     0x00, 0x00, 0xac, 0x4c, 0x44, 0xac, 0xcc, 0xcc, 0xcc, 0xcc, 0xca, 0x44, 0xc4, 0xca, 0x00, 0x00,
     0x00, 0x00, 0xac, 0xcc, 0xcc, 0xac, 0x2c, 0x22, 0x22, 0xc2, 0xca, 0xcc, 0xcc, 0xca, 0x00, 0x00,
     0x00, 0x00, 0xac, 0xaa, 0xaa, 0xaa, 0x2c, 0x22, 0x22, 0xc2, 0xaa, 0xaa, 0xaa, 0xca, 0x00, 0x00,
     0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00,
     0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00,
     0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0xf7,0xc5, 0x00,0x00, 0xa0,0xfd, 0x00,0x00, 0xdf,0x03, 0x00,0x00,
     0x65,0x29, 0x00,0x00, 0x18,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};

// #515 -- Macrus_Proton
static const struct MonsterData Macrus_Proton = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
     0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
     0x00, 0x60, 0xa8, 0x68, 0x00, 0x00, 0xc0, 0x22, 0x22, 0xc2, 0x00, 0x00, 0x00, 0x86, 0x8a, 0x06,
     0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xc2, 0xcc, 0xc2, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00,
     0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0xc0, 0x22, 0x22, 0xc2, 0x00, 0x00, 0x08, 0x00, 0x06, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xc0, 0x44, 0x44, 0xc4, 0x00, 0x86, 0x8a, 0x06, 0x00, 0x00,
     0x00, 0x00, 0x60, 0xa8, 0x68, 0x00, 0xc0, 0xcc, 0xc4, 0xcc, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xc4, 0x00, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x00, 0x60, 0xa8, 0x68, 0x00,
     0x00, 0x60, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0xc2, 0xcc, 0xcc, 0xcc, 0x0c, 0x80, 0x00, 0x00,
     0x00, 0x80, 0x00, 0x00, 0x2c, 0x22, 0x22, 0xc2, 0xc2, 0x22, 0x22, 0x22, 0x0c, 0x60, 0x00, 0x00,
     0x60, 0xa8, 0x68, 0x00, 0x2c, 0xcc, 0xcc, 0xcc, 0xc2, 0xcc, 0xcc, 0x2c, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x80, 0x00, 0x00, 0x2c, 0x0c, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x2c, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x60, 0x00, 0x00, 0x2c, 0x0c, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x2c, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x4c, 0x0c, 0x00, 0xc0, 0xc4, 0x00, 0x00, 0x4c, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x4c, 0xcc, 0xcc, 0xcc, 0xc4, 0xcc, 0xcc, 0x4c, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x4c, 0x44, 0x44, 0xc4, 0xc4, 0x44, 0x44, 0x44, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x06, 0xcc, 0xcc, 0xcc, 0xcc, 0xc4, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x86, 0x8a, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x86, 0x8a, 0x06, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc2, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0x76,0xf6, 0x00,0x00, 0xb0,0xfe, 0x00,0x00, 0xa0,0x05, 0x00,0x00,
     0x40,0x05, 0x00,0x00, 0xc0,0x03, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};

// #517 -- Officer_Krobes
static const struct MonsterData Officer_Krobes = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x11, 0x00, 0x00, 0x00, 0x11, 0x11, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0xec, 0x11, 0x11, 0x11, 0xcc, 0xee, 0x11, 0x11, 0x11, 0xe1, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xee, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xee, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0xcc, 0xcc, 0xcc, 0x66, 0x66, 0x66, 0xc4, 0xcc, 0xcc, 0xee, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0xcc, 0xcc, 0xcc, 0x66, 0x66, 0x66, 0xc4, 0xcc, 0xcc, 0xee, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x11, 0xcc, 0xcc, 0xcc, 0x66, 0x66, 0x66, 0xc4, 0xcc, 0xcc, 0xee, 0x01, 0x00, 0x00, 0x00,
     0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x08, 0x21, 0x80, 0x88, 0x88, 0x10, 0x02, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x08, 0x11, 0x80, 0x88, 0x88, 0x10, 0x01, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x08, 0x00, 0x80, 0x88, 0x88, 0x00, 0x00, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x18, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xa1, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x88, 0x01, 0x10, 0x88, 0x18, 0x00, 0x81, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x88, 0x11, 0x11, 0x88, 0x18, 0x11, 0x81, 0x88, 0xa8, 0x01, 0x00, 0x00, 0x00,
     0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x10, 0x01, 0x00,
     0x00, 0x10, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x10, 0x11, 0x00,
     0x00, 0x00, 0x81, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x10, 0x11, 0x00,
     0x00, 0x00, 0x10, 0x88, 0x11, 0x11, 0x11, 0x11, 0x11, 0x88, 0x88, 0x88, 0x1a, 0x10, 0x11, 0x00,
     0x00, 0x00, 0x10, 0x88, 0xaa, 0x01, 0x00, 0x00, 0x10, 0x81, 0xa8, 0x8a, 0xa8, 0x11, 0x1a, 0x00,
     0x10, 0x11, 0x11, 0x88, 0x1a, 0x00, 0x11, 0x11, 0x11, 0x88, 0x1a, 0x81, 0x88, 0x88, 0x1a, 0x00,
     0x10, 0x88, 0x88, 0x88, 0x1a, 0x10, 0x88, 0x88, 0x88, 0xa8, 0x01, 0x10, 0x81, 0x88, 0x01, 0x00,
     0x10, 0x11, 0x11, 0x11, 0x01, 0x10, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x11, 0x11, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0xf7,0xc5, 0x00,0x00, 0x09,0xfd, 0x00,0x00, 0xa0,0xfd, 0x00,0x00,
     0x1a,0xd8, 0x00,0x00, 0x11,0x90, 0x00,0x00, 0x1f,0x00, 0x00,0x00, 0x18,0x00, 0x00,0x00,
}};

// #519 -- melvin_whiprod
static const struct MonsterData melvin_whiprod = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x50, 0x33, 0x33, 0x55, 0x55, 0x33, 0x33, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x35, 0x63, 0x66, 0x33, 0x33, 0x66, 0x36, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x33, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x33, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x36, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x45, 0x66, 0x45, 0x66, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x54, 0x66, 0x54, 0x66, 0x55, 0x55, 0x05, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x56, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x45, 0x45, 0x45, 0x66, 0x55, 0x55, 0x53, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x54, 0x54, 0x54, 0x66, 0x05, 0xc5, 0x05, 0x00, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x05, 0xc5, 0x05, 0x55, 0x00, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x05, 0xc5, 0x55, 0x15, 0x05, 0x00,
     0x00, 0x50, 0x63, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x05, 0xc5, 0x05, 0x15, 0x05, 0x00,
     0x00, 0x50, 0x63, 0x56, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x05, 0xc5, 0x05, 0x15, 0x51, 0x00,
     0x00, 0x50, 0x63, 0x65, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x05, 0x55, 0x05, 0x15, 0x51, 0x00,
     0x00, 0x50, 0x63, 0x65, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x05, 0x00, 0x00, 0x15, 0x51, 0x00,
     0x00, 0x55, 0x63, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x15, 0x51, 0x00,
     0x50, 0x51, 0x63, 0x15, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x05,
     0x50, 0x50, 0x63, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
     0x50, 0x5e, 0x63, 0x15, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x05,
     0x50, 0x50, 0x33, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
     0x50, 0xee, 0x55, 0xee, 0xee, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x05,
     0x50, 0xee, 0xee, 0xee, 0x1e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x05,
     0x50, 0x5e, 0xe5, 0x55, 0x5e, 0x15, 0x55, 0x51, 0x15, 0x55, 0x51, 0x15, 0x55, 0x51, 0x15, 0x05,
     0x00, 0x05, 0x50, 0x00, 0x05, 0x50, 0x00, 0x05, 0x50, 0x00, 0x05, 0x50, 0x00, 0x05, 0x50, 0x00,
     0x00, 0x00, 0x00, 0x0a, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x02, 0x00,
     0x20, 0xa0, 0x00, 0x00, 0x0a, 0x00, 0x0a, 0xa0, 0x00, 0x02, 0x00, 0x00, 0x08, 0x0a, 0x00, 0x08,
     0x00, 0x08, 0x80, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0xa0, 0x00, 0x0a, 0x00, 0x00, 0x0a, 0x00,
     0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00,
     0x20, 0x20, 0x00, 0x08, 0x20, 0x00, 0x20, 0x00, 0x02, 0x20, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0xdf,0x03, 0xfb,0xf5, 0xc0,0x03, 0xb3,0x5f, 0x00,0x00, 0xa0,0x05, 0x00,0x00,
     0xd3,0xfa, 0x00,0x00, 0x80,0xa8, 0x00,0x00, 0x65,0x29, 0x00,0x00, 0xdf,0x03, 0x00,0x00,
}};

// #521 -- cub_nichols
static const struct MonsterData cub_nichols = {{
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x88, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x88, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x80, 0x44, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x44, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x80, 0x24, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x42, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x88, 0x88, 0x88, 0x88, 0x88, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x84, 0x44, 0x84, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x84, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x48, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x80, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x80, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x08, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x88, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x80, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x48, 0x44, 0x24, 0x22, 0x42, 0x44, 0x44, 0x08, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x44, 0x44, 0x22, 0x22, 0x22, 0x44, 0x44, 0x84, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x48, 0x44, 0x44, 0x22, 0x22, 0x22, 0x44, 0x48, 0x84, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x48, 0x84, 0x24, 0x22, 0x22, 0x22, 0x42, 0x48, 0x84, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x48, 0x84, 0x24, 0x22, 0x22, 0x22, 0x42, 0x48, 0x84, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x48, 0x84, 0x88, 0x88, 0x88, 0x88, 0x88, 0x48, 0x84, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x48, 0x84, 0x66, 0x66, 0x66, 0x66, 0x66, 0x86, 0x08, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x80, 0x68, 0x66, 0x66, 0x66, 0x66, 0x66, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x68, 0x66, 0x66, 0x88, 0x66, 0x66, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x00, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x80, 0x44, 0x84, 0x00, 0x48, 0x44, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x08, 0x00, 0x80, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xff,0xff, 0x00,0x00, 0xa0,0xfd, 0x00,0x00, 0x00,0xac, 0x00,0x00, 0xdf,0x03, 0x00,0x00,
     0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00,
}};

static const struct MonsterData* monsters[] = {
    &Mr_Pink,
    &Ichabod_Nibbs,
    &Hurnold_Fobcakes,
    &Hollister_Plough,
    &Jiffy_Bobbert,
    &berserkers_n1_and_n2,
    &Mike_Pocket,
    &Macrus_Proton,
    &Officer_Krobes,
    &melvin_whiprod,
    &cub_nichols,
};

#endif

