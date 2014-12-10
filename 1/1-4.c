/*
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */
#include <stdio.h>
int main () {
  float fahr, celsius;
  float upper, lower, step;

  lower = 0;  /* Lower boundary of our celsius table. */
  upper = 100; /* Upper boundary of celsius table. */
  step = 10; /* Step */

  celsius = lower;
  printf ("%20s%20s\n", "Celsius", "Fahrenheit");
  while (celsius <= upper) {
    printf ("%20.0f%19.1f\n", celsius, (celsius * 9 / 5) + 32);
    celsius = celsius + step;
  }
  return 0;
}
