////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// SYMBOL.H - Symbol Handling
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#ifndef __SYMBOL_H__
#define __SYMBOL_H__

#include "smac.h"

// Macros
#define NBUCKETS        256                                 // Number of hash buckets (power of 2)

// Globals, externals etc
extern int curenv;
extern char subttl[];

// Prototypes
SYM *lookup(char *, int, int);
void init_sym(void);
SYM *newsym(char *, int, int);
char *nstring(char *);
void sym_decl(SYM *);
int syg_fix(void);
int symtable(void);
int sy_assign(char *, char *(*)());

#endif // __SYMBOL_H__