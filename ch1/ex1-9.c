
/**
 * Copy input to output replacing blanks of length 1
 * or more to a single blank
 *
 * e.g. When Sally   Met    Harry -> When Sally Met Harry
 */
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int c;
  int blankCount = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blankCount++;

      if (blankCount == 1) {
        putchar(c);
      }
    } else {
      putchar(c);
      blankCount = 0;
    }
  }

  return 0;
}
