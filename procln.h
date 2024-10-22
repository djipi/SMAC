////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// PROCLN.H - Line Processing
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#ifndef __PROCLN_H__
#define __PROCLN_H__

#include "smac.h"
#include "token.h"

// Globals, externals etc
extern IFENT *ifent;
extern char *comma_error;
extern char *locgl_error;
extern char *syntax_error;
extern int just_bss;
extern VALUE pcloc;
extern IFENT *ifent;
extern SYM *lab_sym;
extern char extra_stuff[];
extern LONG amsktab[];

// Prototypes
void init_procln(void);
void assemble(void);
int eject(void);
int d_if(void);
int d_else(void);
int d_endif(void);
int at_eol(void);

#endif // __PROCLN_H__