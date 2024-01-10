/**
 * Copy input to output replacing tabs with '\t',
 * backspaces with '\b', and '\' with '\'
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  int blankCount = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b') {
      putchar('\\');
      putchar('b');
      printf("here");
    }
    else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    }
    else {
      // printf("%d", c);
    }
  }

  return 0;
}
