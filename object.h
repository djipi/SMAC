////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// OBJECT.H - Writing Object Files
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#ifndef __OBJECT_H__
#define __OBJECT_H__

#include "smac.h"

#define BSDHDRSIZE   0x20                                   // Size of BSD header

// Globals, externals etc
extern char *objimage;

// Prototypes
int object(WORD);

#endif // __OBJECT_H__
