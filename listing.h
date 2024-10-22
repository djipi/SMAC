////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// LISTING.H - Listing Output
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#ifndef __LISTING_H__
#define __LISTING_H__

#include <time.h>
#include "smac.h"

#define BOT_MAR         1                                   // #blank lines on bottom of page
#define IMAGESIZ        200                                 // Max size of a line of text
#define TITLESIZ        200                                 // Max size of a title
#define LN_COL          0                                   // Column for line numbers
#define LOC_COL         7                                   // Location ptr
#define DATA_COL        17                                  // Data start (for 20 chars, usually 16)
#define DATA_END        (DATA_COL+20)                       // End+1th data column
#define TAG_COL         38                                  // Tag character
#define SRC_COL         40                                  // Source start

// Globals, externals etc
extern char *list_fname;
extern int listing;
extern int pagelen;
extern int nlines;
extern LONG lsloc;

// Prototypes
void init_list(void);
void ship_ln(char *);
void taglist(char);
void println(char *);
void listeol(void);
VALUE dos_date(void);
VALUE dos_time(void);
void lstout(char);
int listvalue(VALUE);
int d_subttl(void);
int d_title(void);

#endif // __LISTING_H__