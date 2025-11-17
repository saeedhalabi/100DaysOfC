#include <stdio.h>

int main(void) {
  // Variable to store the character entered by the user
  char ascii_code;

  // Prompt the user to enter a single character
  printf("Enter one char: ");

  // Read exactly one character from input
  // Note: this will also read whitespace (like space or newline)
  scanf("%c", &ascii_code);

  // Print the integer (ASCII) value of the character
  // When printed with %d, the char is promoted to int
  printf("Ascii value is: %d", ascii_code);

  return 0;
}
