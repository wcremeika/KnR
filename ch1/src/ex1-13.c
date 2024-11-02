/**
 * Outputs a histogram of 
 * word lengths for a given input
 */
#include <stdio.h>


int main() {
  char c;
  int len = 0;
  int hist[20];

  for (int i = 0; i <= 20; ++i) {
    hist[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= 'A' && c <='Z' || c >= 'a' && c <= 'z') {
      len++;
    }
    else {
      hist[len]++; 
      len = 0;
    }
  }


  for (int i = 0; i <= 20; ++i) {
    printf("word length %d: ", i);
    for (int j = 0; j < hist[i]; ++j) printf("*");
    puts("");
  }

  return 0;
}

