/**
 * Count number of blanks, tabs, and new lines
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  int blankCount = 0, tabCount = 0, nlCount = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blankCount++;
    }
    else if (c == '\t') {
      tabCount++;
    }
    else if (c == '\n') {
      nlCount++;
    }
  }

  printf("Blank count: %d\n", blankCount);
  printf("Tab count: %d\n", tabCount);
  printf("New line count: %d\n", nlCount);

  return 0;
}
