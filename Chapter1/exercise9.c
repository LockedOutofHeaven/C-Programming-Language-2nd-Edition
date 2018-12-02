#include <stdio.h>

int main() {
  int c, hasBlank;

  hasBlank = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (hasBlank == 0) {
        putchar(c);
        hasBlank = 1;
      }
    } else {
      putchar(c);
      hasBlank = 0;
    }
  }
}