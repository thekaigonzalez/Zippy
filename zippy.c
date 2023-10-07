/*Copyright 2019-2023 Kai D. Gonzalez*/

#include "dim.h"
#include <ncurses.h>
#include <string.h>
#include <malloc.h>

main ()
{
  initscr ();

  textlinebuffer b;
  textbuf (&b);

  fwprint (&b, "(zipp box terminal)");
  fwprint (&b, "type 'hello' in the prompt below");
  fwprint (&b, "");

  while (1) {
    char* n = malloc(100);
    wprint(&b, "]");

    getstr(n);
    fwprint (&b, "");

    if (strcmp(n, "exit") == 0) {
        break;
    } else {
        fwprint(&b, "Hello!");
    }
  }
  endwin ();
}
