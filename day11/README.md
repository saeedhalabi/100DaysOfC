# Day 11 -- Nested If Statements in C

Today I learned nested if statements in C. A nested if is when you put
an if statement inside another if statement. It lets you check more than
one condition step by step.

## What I Learned

1.  A nested if checks Condition A first.
2.  If A is true, then it checks Condition B.
3.  This helps create multi-level decisions.

## Why Nested If is Useful

-   Useful for checking several rules.
-   Helps make decisions that depend on earlier results.
-   Common for validation, grades, menus, and logic flow.

## Simple Flow

    IF condition A is true
        IF condition B is true
            DO action 1
        ELSE
            DO action 2
    ELSE
        DO something else

## Code Example

``` c
#include <stdio.h>

int main() {
    int age;
    int hasID;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Do you have an ID? (1 = yes, 0 = no): ");
        scanf("%d", &hasID);

        if (hasID == 1) {
            printf("You are allowed to enter.
");
        } else {
            printf("You must show an ID.
");
        }
    } else {
        printf("You are too young to enter.
");
    }

    return 0;
}
```
