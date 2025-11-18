#include <stdio.h>

int main(void) {
  char c;
  short s;

  printf("Size of character is: %zu byte(s)\n", sizeof(c));
  // zu prints correct unsigned size_t values returned by sizeof operator
  printf("Size of short: %zu byte(s)\n", sizeof(s));
  printf("Size of float: %zu byte(s)\n", sizeof(float));

  return 0;
}
