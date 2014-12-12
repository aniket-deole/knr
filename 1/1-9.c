/*
 * Write a program to copy its input to its output, replacing each string of one
 * or more blanks by a single blank.
 */
#include <stdio.h>
int main (int argc, char* argv[]) {
  int previous_character;
  int c;

  while ((c = getchar ()) != EOF) {
    if (c == ' ') {
      if (previous_character == 0) {
        previous_character = 1;
        putchar (c);
      }
    } else {
      previous_character = 0;
      fputc (c, stdout);
    }
    fflush (stdout);
  }

  return 0;
}
