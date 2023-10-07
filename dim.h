/*Copyright 2019-2023 Kai D. Gonzalez*/

#include <ncurses.h>
#include <string.h>

#define SCR_X 10 /* where all text will be placed (x) */
#define SCR_Y 3  /* where all text will be placed (y) */

typedef struct _tl_buffer
{
  int line;
} textlinebuffer;

int textbuf (textlinebuffer *b);
int fwprint (textlinebuffer *b, const char *lit);
int wprint (textlinebuffer *b, const char *lit);
