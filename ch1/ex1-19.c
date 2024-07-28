#include <stdio.h>

void reverse(char s[]);
int length(char s[]);

int main() {
  reverse("hello\0");
}

int length(char s[]) {
  int l = 0;

  while (s[l++] != '\0');

  return l;
}

void reverse(char s[]) {
  int len = length(s);
  int i = len - 1;

  while (i >= 0) {
    putchar(s[i--]);
  }
}

