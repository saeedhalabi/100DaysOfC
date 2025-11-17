#include <stdio.h>

int main(void) {
  // 258 is too large to fit in a 1-byte char (max 255 unsigned, 127 signed)
  // The value wraps around: 258 % 256 = 2
  char ch = 258;

  // %d prints the numeric value of 'ch' after it is promoted to int
  // This will print: 2
  printf("%d", ch);

  // %c prints the character that corresponds to the byte value 2
  // On Windows consoles, value 2 appears as the symbol "☻"
  // (this comes from the old DOS code page 437)
  printf("%c", ch);

  return 0;
}
