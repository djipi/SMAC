#
#	SMAC - SubQMod's Macro Assembler for the Atari Jaguar
#	Copyright (c) SubQMod, 2007-2009
#	MAKEFILE for Windows Compilation using Microsoft Visual C
#	Currently tested against MS Visual C 6, MS Visual Studio 2005
#	Ensure that you have the correct compiler environment variables set
#

rm= del 
CC= cl 
LINK= link

CFLAGS= /nologo /MT /W0 /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /c 
LFLAGS= /nologo /subsystem:console /incremental:no 

SRCS = amode.c debug.c direct.c eagen.c error.c expr.c listing.c mach.c macro.c mark.c object.c procln.c risca.c sect.c smac.c symbol.c token.c 

OBJS = amode.obj debug.obj direct.obj eagen.obj error.obj expr.obj listing.obj mach.obj macro.obj mark.obj object.obj procln.obj risca.obj sect.obj smac.obj symbol.obj token.obj

#
#	Build everything
#

all : mntab.h 68ktab.h kwtab.h risckw.h smac.exe

#
#	Generated Sources for State Machines and Keyword, Directive and Mnemonic Definitions
#

mntab.h : mntab 68kmn kwgen.exe
	type mntab 68kmn | kwgen mn >mntab.h

68ktab.h 68kmn : 68ktab 68ktab 68kgen.exe
	68kgen.exe 68kmn <68ktab >68ktab.h

kwtab.h : kwtab kwgen.exe
	kwgen.exe kw <kwtab >kwtab.h

risckw.h : kwtab kwgen.exe
	kwgen.exe mr <risctab >risckw.h

#
#	Build Tools
#

kwgen.obj : kwgen.c
	$(CC) $(CFLAGS) kwgen.c

kwgen.exe : kwgen.obj
	$(LINK) $(LFLAGS) /out:"kwgen.exe" kwgen.obj

68kgen.obj : 68kgen.c
	$(CC) $(CFLAGS) 68kgen.c 

68kgen.exe : 68kgen.obj
	$(LINK) $(LFLAGS) /out:"68kgen.exe" 68kgen.obj

#
#	Build SMAC Executable
#

.c.obj: 
	$(CC) $(CFLAGS) $*.c 

amode.obj : amode.c
	$(CC) $(CFLAGS) amode.c

debug.obj : debug.c
	$(CC) $(CFLAGS) debug.c

direct.obj : direct.c
	$(CC) $(CFLAGS) direct.c

eagen.obj : eagen.c
	$(CC) $(CFLAGS) eagen.c

error.obj : error.c
	$(CC) $(CFLAGS) error.c

expr.obj : expr.c
	$(CC) $(CFLAGS) expr.c

listing.obj : listing.c
	$(CC) $(CFLAGS) listing.c

mach.obj : mach.c
	$(CC) $(CFLAGS) mach.c

macro.obj : macro.c
	$(CC) $(CFLAGS) macro.c

mark.obj : mark.c
	$(CC) $(CFLAGS) mark.c

object.obj : object.c
	$(CC) $(CFLAGS) object.c

procln.obj : procln.c
	$(CC) $(CFLAGS) procln.c

risca.obj : risca.c
	$(CC) $(CFLAGS) risca.c

sect.obj : sect.c
	$(CC) $(CFLAGS) sect.c

smac.obj : smac.c
	$(CC) $(CFLAGS) smac.c

symbol.obj : symbol.c
	$(CC) $(CFLAGS) symbol.c

token.obj : token.c
	$(CC) $(CFLAGS) token.c 

smac.exe : $(OBJS) 
	$(LINK) $(LFLAGS) /out:"smac.exe" $(OBJS)

#
#	Clean Build Environment
#

clean: 
	$(rm) $(OBJS) kwgen.obj 68kgen.obj smac.exe kwgen.exe 68kgen.exe kwtab.h 68ktab.h mntab.h risckw.h



