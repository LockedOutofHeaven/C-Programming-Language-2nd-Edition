#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, state;

  state = OUT;

  while((c = getchar()) != EOF) {
    if (c == '\t' || c == '\n' || c == ' ') {
      if (state == IN) {
        state = OUT;
        putchar('\n');
      }
    } else {
      state = IN;
      putchar(c);
    }
  }

  putchar('\n');
}