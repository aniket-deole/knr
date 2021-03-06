/*
 * Modify the temperature conversion program to print the table in reverse that
 * is, from 300 degrees to 0.
 */

#include <stdio.h>

int main () {
  float fahr, celsius;
  float lower, upper, step;
 
  lower = 0; /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step  = 20; /* step size */

  fahr = upper;
  printf ("%20s%20s\n", "Fahrenheit", "Celsius");
  while (fahr >= lower) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf ("%20.0f %20.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
}
