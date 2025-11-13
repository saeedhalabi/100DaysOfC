# 100DaysOfC - Day X: Integer Overflow

## Overview
On **Day X** of my #100DaysOfC journey, I focused on understanding **Integer Overflow**, a critical concept in programming, especially when working with low-level languages like C.

### What is Integer Overflow?
Integer overflow occurs when an operation results in a value that exceeds the maximum or minimum limit of the integer type being used. This can lead to unexpected behavior in programs and introduce hard-to-find bugs or vulnerabilities. 

In C, integers are stored using a fixed number of bits, and when an arithmetic operation results in a value larger than the largest number representable by the type (or smaller than the smallest number), the value "wraps around," potentially causing incorrect results.

For example:
- If you have an 8-bit signed integer (`int8_t`), the maximum value is `127`. If you add `1` to `127`, it will overflow and wrap around to `-128`.

### Why is it Important?
Integer overflow can lead to:
- **Unexpected behavior**: Incorrect program results.
- **Security vulnerabilities**: Exploiting integer overflow can allow attackers to manipulate memory addresses, leading to potential exploits.

### Key Takeaways
- **Types of Integer Overflow**: 
  - Overflow (for positive numbers)
  - Underflow (for negative numbers)
  
- **Common Causes**: 
  - Incorrect assumption about the size of data types.
  - Failing to check for boundary conditions before performing arithmetic operations.

- **Preventive Measures**:
  - Always check for boundary conditions before performing operations.
  - Use safe data types and libraries (e.g., `int32_t`, `int64_t`, or unsigned types for values that should never be negative).
  - Use built-in functions like `__overflow` in some compilers or implement custom checks to prevent overflow.

### Example of Integer Overflow in C
```c
#include <stdio.h>
#include <limits.h>

int main() {
    int max = INT_MAX;  // Maximum value for an int
    printf("Max int: %d\n", max);

    int overflow = max + 1;  // This will overflow
    printf("Overflowed value: %d\n", overflow);

    return 0;
}
