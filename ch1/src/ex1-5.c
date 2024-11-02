/**
 * Write a program to print fahrenheit to celsius
 * starting with fahrenheit temp of 200 and going to
 * 0, using intervals of 20 for fahrenheit
 *
 * e.g. 200, 180, 160, ... 0
 */
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int step = 20, upper = 200, lower = 0;
  float cels;

  for (int fahr = upper; fahr >= 0; fahr = fahr - step) {
    cels = ((float)fahr - 32) * 5 / 9;
    printf("f: %d, c: %.2f\n", fahr, cels);
  }

  return 0;
}
