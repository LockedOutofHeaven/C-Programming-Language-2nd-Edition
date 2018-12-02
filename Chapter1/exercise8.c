#include <stdio.h>

int main() {
  int c, n;

  n = 0; // need to assign a staring value

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++n;
    else if (c == '\t')
      ++n;
    else if (c == '\n')
      ++n;
  }

  printf("%d\n", n);
}