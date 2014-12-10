/*
 * Verify that the expression getchar () != EOF is either 0 or 1.
 */

#include <stdio.h>

int main () {
  int c;

  while (1) {
    c = (getchar () != EOF);
    if (c == 0) {
      printf ("%d\n", c);
        break;
    } else
      printf ("%d\n", c);
  }

  return 0;
}
