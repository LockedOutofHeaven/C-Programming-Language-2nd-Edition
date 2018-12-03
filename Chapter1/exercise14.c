#include <stdio.h>

#define NCAHR 128

int main() {
  int c, i, j, l;

  int chars[NCAHR];

  for (i = 0; i < NCAHR; ++i)
    chars[i] = 0;

  while((c = getchar()) != EOF)
    ++chars[c];

  for (i = 0; i < NCAHR; ++i) {
    if ((l = chars[i]) > 0) {
      printf("(%c) ", i);
      for (j = 0; j < l; ++j) {
        putchar('*');
      }
      putchar('\n');
    }
  }
}