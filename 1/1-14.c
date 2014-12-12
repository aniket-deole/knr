/*
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 */
#include <stdio.h>

int main (int argc, char* argv[]) {
  int c, i, j;
  int char_freq[256];

  for (i = 0; i < 256; i++) {
    char_freq[i] = 0;
  }

  while ((c = getchar ()) != EOF) {
    char_freq[c]++;
  }

  for (i = 0; i < 256; i++) {
    if (char_freq[i] != 0) {
      printf ("%3c:", i);
      for (j = 0; j < char_freq[i]; j++) {
        printf ("#");
      }
      printf ("\n");
    }
  }

  return 0;
}
