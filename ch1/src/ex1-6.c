/**
 * Verify "getchar() != EOF" equals 0 or 1
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
  // EOF is CTRL-d: https://stackoverflow.com/a/11944522
  printf("%d\n", getchar() != EOF);
  return 0;
}
