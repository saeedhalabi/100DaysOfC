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
    printf("Value of this floating-point number = %f\n", b);

    // Update value
    a = 20;
    printf("Updated value of a = %d\n", a);

    return 0;
}
