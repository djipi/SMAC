////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// MARK.H - A record of things that are defined relative to any of the sections
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#ifndef __MARK_H__
#define __MARK_H__

#include "smac.h"
#include "sect.h"

#define MARK_ALLOC_INCR 1024                                // #bytes to alloc for more mark space 
#define MIN_MARK_MEM    (3*sizeof(WORD)+2*sizeof(LONG))

// Globals, Externals etc
extern MCHUNK *firstmch;

// Prototypes
void init_mark(void);
void stopmark(void);
int rmark(int, LONG, int, int, SYM *);
int amark(void);
LONG bsdmarkimg(char *, LONG, LONG, int);

#endif // __MARK_H__