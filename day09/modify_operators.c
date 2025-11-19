
#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial x = %d\n", x);

    // Pre-increment
    int a = ++x;  
    printf("After ++x: x = %d, a = %d\n", x, a);

    // Post-increment
    int b = x++;  
    printf("After x++: x = %d, b = %d\n", x, b);

    // Pre-decrement
    int c = --x;  
    printf("After --x: x = %d, c = %d\n", x, c);

    // Post-decrement
    int d = x--;  
    printf("After x--: x = %d, d = %d\n", x, d);

    return 0;
}
