/*
 * Write a program to count blanks, tabs and newlines.
 */

#include <stdio.h>

int main (int argc, char* argv[]) {
  int c;
  int newlines, blanks, tabs;

  newlines = blanks = tabs = 0;

  while ((c = getchar ()) != EOF) {
    if (c == '\n')
      newlines++;
    else if (c == '\t')
      tabs++;
    else if (c == ' ') {
      blanks++;
    }
  }

  printf ("%3d %3d %3d\n", blanks, tabs, newlines);

  return 0;
}
