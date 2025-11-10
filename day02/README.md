## 📅 Day 2 — Function, Function Definition and Function Call

### 🧠 Concepts Covered
- **What is a Function?**  
  A function is a block of code designed to perform a specific task. It helps make programs modular and easier to manage.
  
- **Types of Functions**
  - **Library Functions** – Built-in functions provided by C (e.g., `printf()`, `scanf()`).
  - **User-Defined Functions** – Functions written by the programmer.

- **Function Components**
  - **Declaration (Prototype):** Tells the compiler about a function’s name, return type, and parameters.  
    ```c
    int add(int a, int b);
    ```
  - **Definition:** Contains the actual code that defines what the function does.  
    ```c
    int add(int a, int b) {
        return a + b;
    }
    ```
  - **Call:** Executes the function in your program.  
    ```c
    int sum = add(5, 10);
    ```

## 🧩 Additional Learning — C Library & IDE

### 🏛️ C Library (`#include <stdio.h>`)
Learned that the **C Standard Library** provides a collection of predefined functions (like `printf()` and `scanf()`) that help with **input/output**, **string manipulation**, and **math operations**.

### 🧠 IDE (Integrated Development Environment)
Explored how an **IDE** (like **Code::Blocks**, **Dev-C++**, or **VS Code**) helps write, compile, and run C programs easily by combining the **editor**, **compiler**, and **debugger** in one place.

### ⚙️ Key Takeaways
- Every C program needs:
  - A **compiler** (e.g., GCC) to translate code into machine language.  
  - The proper **header files** to use library functions correctly.


### 🗒️ Notes
- Today’s session focused on understanding the **theory** behind functions — no coding examples were written yet.  
- Learned why functions make code **reusable** and **easier to debug**.  
- Learned about **function arguments** and **return types**, and how **library functions** are available through **C headers**..

---
