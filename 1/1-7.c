/*
 * Write a program to print the value of EOF.
 */

#include <stdio.h>

int main () {
  int c;

  while (1) {
    c = getchar ();
    if (c == EOF) {
      printf ("%d\n", c);
        break;
    }
    }

  return 0;
}
