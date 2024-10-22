////////////////////////////////////////////////////////////////////////////////////////////////////
// SMAC - SubQMod's Macro Assembler for the Atari Jaguar Console System
// ERROR.C - Error Handling
// Copyright (c) SubQMod, 2007-2009
// SMAC Derived from MADMAC v1.07 Written by Landon Dyer, 1986
// Source Utilised with the Kind Permission of Landon Dyer

#include "error.h"
#include "token.h"
#include "listing.h"

int errcnt;                                                 // Error count
char *err_fname;                                            // Name of error message file

static char nl[] = "\n";                                    // end of line usualy encoded for non-windows system

char* interror_msg[] = {
    "Unknown internal error",                               // Error not referenced, should not be displayed
    "Unknown internal error",                               // Error not referenced, should not be displayed
    "Bad MULTX entry in chrtab",                            // Error #2
    "Unknown internal error",                               // Error not referenced, should not be displayed
    "Bad fixup type",                                       // Error #4
    "Bad operator in expression stream",                    // Error #5
    "Can't find generated code in section",                 // Error #6
    "Fixup (loc) out of range"                              // Error #7
};

//
// --- Report error if not at EOL ------------------------------------------------------------------
//

int at_eol(void) {
   if(*tok != EOL)
      error("syntax error");
   return(0);
}

//
// --- Cannot Create a File ------------------------------------------------------------------------
//

void cantcreat(char *fn) {
   printf("cannot create: '%s'\n", fn);
   exit(1);
}

//
// --- Setup for Error Message ---------------------------------------------------------------------
// o  Create error listing file (if necessary)
// o  Set current filename
//

void err_setup(void) {
   char fnbuf[FNSIZ];

   setfnum(cfileno);
   if(err_fname != NULL) {
      strcpy(fnbuf, err_fname);
      if(*fnbuf == EOS) {
         strcpy(fnbuf, firstfname);
      }
      err_fname = NULL;

      if((err_fd = open(fnbuf, _OPEN_FLAGS, _PERM_MODE)) < 0)
         cantcreat(fnbuf);
      err_flag = 1;
   }
}


//
// --- Display Error Message -----------------------------------------------------------------------
//

int error(char *s) {
   char buf[EBUFSIZ];
   unsigned int length;

   err_setup();
   if(listing > 0) ship_ln(s);
   sprintf(buf, "%s[%d]: Error: %s%s", curfname, curlineno, s, nl);
   length = strlen(buf);
   if(err_flag) write(err_fd, buf, length);
   else printf("%s", buf);
   taglist('E');
   ++errcnt;

   return(ERROR);
}


int errors(char *s, char *s1) {
   char buf[EBUFSIZ];
   char buf1[EBUFSIZ];

   err_setup();
   sprintf(buf, s, s1);
   if(listing > 0) ship_ln(buf);
   sprintf(buf1, "%s[%d]: Error: %s%s", curfname, curlineno, buf, nl);
   if(err_flag) write(err_fd, buf1, (LONG)strlen(buf1));
   else printf("%s", buf1);
   taglist('E');
   ++errcnt;

   return(ERROR);
}

int warn(char *s) {
   char buf[EBUFSIZ];

   err_setup();
   if(listing > 0) ship_ln(s);
   sprintf(buf, "%s[%d]: Warning: %s%s", curfname, curlineno, s, nl);
   if(err_flag) write(err_fd, buf, (LONG)strlen(buf));
   else printf("%s", buf);
   taglist('W');

   return(OK);
}

int warns(char *s, char *s1) {
   char buf[EBUFSIZ];
   char buf1[EBUFSIZ];

   err_setup();
   sprintf(buf, s, s1);
   if(listing > 0) ship_ln(s);
   sprintf(buf1, "%s[%d]: Warning: %s%s", curfname, curlineno, buf, nl);
   if(err_flag) write(err_fd, buf1, (LONG)strlen(buf1));
   else printf("%s", buf1);
   taglist('W');

   return(OK);
}

int warni(char *s, unsigned i) {
   char buf[EBUFSIZ];
   char buf1[EBUFSIZ];

   err_setup();
   sprintf(buf, s, i);
   if(listing > 0) ship_ln(buf);
   sprintf(buf1, "%s[%d]: Warning: %s%s", curfname, curlineno, buf, nl);
   if(err_flag) write(err_fd, buf1, (LONG)strlen(buf1));
   else printf("%s", buf1);
   taglist('W');

   return(OK);
}

int fatal(char *s) {
   char buf[EBUFSIZ];

   err_setup();
   if(listing > 0) ship_ln(s);
   sprintf(buf, "%s[%d]: Fatal: %s%s", curfname, curlineno, s, nl);
   if(err_flag) write(err_fd, buf, (LONG)strlen(buf));
   else printf("%s", buf);

   exit(1);
}

int interror(int n) {
   char buf[EBUFSIZ];

   err_setup();
   sprintf(buf, "%s[%d]: Internal Error Number %d : %s%s", curfname, curlineno, n, interror_msg[n], nl);
   if(listing > 0) ship_ln(buf);
   if(err_flag) write(err_fd, buf, (LONG)strlen(buf));
   else printf("%s", buf);

   exit(1);
}