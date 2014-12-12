/*
 * Write a program to print a histogram of the lengths of words in its input. It
 * is easy to dray the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 */
#include <stdio.h>

int main () {
  int c, letter_count, i;

  letter_count = 0;
  while ((c = getchar ()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      for (i = 0; i < letter_count; i++) {
        printf ("#");
      }
      printf ("\n");
      letter_count = 0;
    } else {
      letter_count++;
    }
  }
  return 0;
}
