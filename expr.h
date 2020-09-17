////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// EXPR.H - Expression Analyzer
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#ifndef __EXPR_H__
#define __EXPR_H__

#include "smac.h"

// Tunable definitions
#define STKSIZE      64                                     // Size of expression stacks
#define EVSTACKSIZE  64                                     // Expression evaluator stack size

// Token classes in order of precedence
#define END          0                                      // End/beginning of input
#define ID           1                                      // Symbol or constant
#define OPAR         2                                      // (
#define CPAR         3                                      // )
#define SUNARY       4                                      // Special unary (^^defined, etc.)
#define UNARY        5                                      // Unary class: ! ~ -
#define MULT         6                                      // Multiplicative class: * / %
#define ADD          7                                      // Additive class: + -
#define SHIFT        8                                      // Shift class: << >>
#define REL          9                                      // Relational class: <= >= < > <> = !=
#define AND          10                                     // Bitwise and: &
#define XOR          11                                     // Bitwise xor: ^
#define OR           12                                     // Bitwise or: |

// Prototypes
void init_expr(void);
int expr1(void);
int expr2(void);
int expr(TOKEN *, VALUE *, WORD *, SYM **);
int evexpr(TOKEN *, VALUE *, WORD *, SYM **);

#endif // __EXPR_H__