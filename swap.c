#include <stdio.h>

int main(void) {
  int x = 4;
  int y = 58;

  printf("x is %i\n", x);
  printf("y is %i\n", y);

  // swamping...
  int tmp = x;
  x = y;
  y = tmp;

  printf("x is now %i\n", x);
  printf("y is now %i\n", y);
}
