# Day 7: Working with `char` Data Type in C

## Overview

On Day 7, I explored the **`char` data type** in C, focusing on how characters are stored, displayed, and how numeric values correspond to ASCII codes. This day’s exercises demonstrate two key concepts:

1. Reading a character from user input and printing its ASCII value.
2. Understanding how `char` handles overflow when assigned values outside its range.

---

## Projects / Example Files

### 1. `ascii_value_input.c`

This program allows the user to enter a single character and then prints its **ASCII integer value**:

```c
#include <stdio.h>

int main(void) {
  char ascii_code;

  printf("Enter one char: ");
  scanf("%c", &ascii_code);

  printf("Ascii value is: %d", ascii_code);

  return 0;
}
