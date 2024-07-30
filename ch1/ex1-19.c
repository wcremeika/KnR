#include <stdio.h>

int len(char *str) {
  int i = 0;
  while (str[i] != '\0') i++;
  return i;
}

void reverse(char str[]) {
    int left = 0;
    int right = len(str) - 1;
    char temp;

    while (left < right) {
        temp = str[left];
        str[left++] = str[right];
        str[right--] = temp;

    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

