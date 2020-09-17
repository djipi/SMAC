////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// DEBUG.H - Debugging Messages
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "smac.h"

// Prototypes
int mudump(void);
int mdump(char *, LONG, int, LONG);
int dumptok(TOKEN *);
int dump_everything(void);

#endif // __DEBUG_H__