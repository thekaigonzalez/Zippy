/*Copyright 2019-2023 Kai D. Gonzalez*/

#include "dim.h"

int
textbuf (textlinebuffer *b)
{
  b->line = 0;
  return (0);
}

int
fwprint (textlinebuffer *b, const char *lit)
{
  mvaddstr (SCR_Y + b->line, SCR_X, lit); // place string at line
  b->line++;                              // increment the line
  move(SCR_Y + b->line, SCR_X);
  return (0);
}

int
wprint (textlinebuffer *b, const char *lit)
{
  mvaddstr (SCR_Y + b->line, SCR_X, lit); // place string at line
  move(SCR_Y + b->line, SCR_X+strlen(lit));
  return (0);
}
