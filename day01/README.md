# Day 1 — Hello, World! & Variables in C

## 💡 What I Learned
- How to write, compile, and run a simple C program using `gcc`.
- Basic structure of a C program: `#include`, `main()`, and `return`.
- How to print text to the console with `printf`.
- How to declare and initialize variables in C.
- Difference between declaration (`int a;`) and initialization (`a = 10;`).
- Using **format specifiers** like `%d` and `%f` to print variable values.
- Updating variable values during program execution.

## 🧩 Example Code
```c
// Day 1: Variables in C
// Syntax: data_type variable_name = value;

#include <stdio.h>

int main(void) {
    int a;      // integer variable declaration
    float b;    // float variable declaration

    // Initialization
    a = 10;
    b = 9.11;

    // Output
    printf("Value of a = %d\n", a);
    printf("Value of this floating-point number = %.2f\n", b);

    // Update value
    a = 20;
    printf("Updated value of a = %d\n", a);

    return 0;
}
