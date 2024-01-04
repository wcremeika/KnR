/**
 * Write a program for celsius to fahrenheit
 */
#include <stdio.h>

/**
 * Program to convert a collection
 * of temperatures from celsius to fahrenheit
 */

int main() {
  int fahr = 0, cels;
  int lower = 0, upper = 300, step = 20;

  printf("fahr    cels\n");
  printf("-------------\n");

  while (fahr <= upper) {
    cels = 5 * (fahr - 32) / 9;
    printf("%3d%8d\n", fahr, cels);
    fahr = fahr + step;
  }

  return 0;
}