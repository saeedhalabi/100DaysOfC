# 📘 C Programming: Data Types (Day 3)

## Overview

On Day 3 of learning C, we explore **data types**, which are the foundation of storing and manipulating data in a program. Data types tell the compiler **what kind of data** a variable can hold.

In C, data types are mainly divided into three categories:

- **Primitive (Basic) Data Types**
- **Derived Data Types**
- **User-Defined Data Types**

---

## 1️⃣ Primitive (Basic) Data Types

These are **built-in types** provided by C to store simple data.

| Data Type | Size (typical, may vary) | Description                | Example               |
|-----------|--------------------------|---------------------------|----------------------|
| `int`     | 2–4 bytes                | Stores integer numbers     | `int age = 25;`      |
| `float`   | 4 bytes                  | Stores decimal numbers     | `float price = 99.99;` |
| `double`  | 8 bytes                  | Stores larger decimal numbers | `double pi = 3.14159;` |
| `char`    | 1 byte                   | Stores a single character | `char grade = 'A';`  |
| `_Bool`   | 1 byte                   | Stores `true` or `false` values | `bool isOn = 1;`   |

> ⚡ Note: Some data types may have **modifiers** like `signed`, `unsigned`, `long`, or `short` to adjust size and value range.

---

### 📝 `int` in Detail

The `int` type is used to store **whole numbers** (no decimals). By default, it is **signed**, meaning it can store both negative and positive numbers.

#### Modifiers for `int`
| Modifier       | Description                             | Example                    |
|----------------|-----------------------------------------|----------------------------|
| `signed int`   | Default, can store negative & positive  | `signed int a = -10;`     |
| `unsigned int` | Only stores positive numbers            | `unsigned int b = 10;`    |
| `short int`    | Smaller range than default int          | `short int c = 32000;`    |
| `long int`     | Larger range than default int           | `long int d = 1000000;`   |
| `long long int`| Very large range                        | `long long int e = 1000000000;` |

> ⚡ Tip: Choose the **smallest type that can hold your values** to save memory.

> ⚡ Note for other primitive types:  
> - **float** and **double** store decimal numbers. Use `float` for smaller precision and `double` for higher precision. Modifiers like `long` can extend the range of `double`.  
> - **char** stores single characters and can be signed or unsigned depending on your system. Arrays of `char` are used to store strings.  
> - **_Bool** stores logical values (`0` for false, `1` for true). It usually takes 1 byte of memory. 


## 2️⃣ Derived Data Types

Derived data types are **built from primitive types** and allow us to work with more complex data structures. They are essential for managing multiple values and memory in C.

| Data Type  | Description                                      | Example                                  |
|------------|--------------------------------------------------|------------------------------------------|
| **Array**  | A collection of elements of the same type       | `int nums[5] = {1, 2, 3, 4, 5};`        |
| **Pointer**| Stores the **address** of a variable           | `int *ptr = &age;`                       |
| **Function**| A block of code that can take inputs and return a value | `int sum(int a, int b) { return a + b; }` |

> ⚡ Note:  
> - Arrays are **fixed in size** and hold elements of the same type.  
> - Pointers are **powerful** but require careful handling to avoid memory issues.  
> - Functions can be used as **return types** or **arguments**, making code reusable and modular.


## 3️⃣ User-Defined Data Types

User-defined data types let programmers **create their own types** to represent complex data in a structured way. They are very useful for organizing related data and making code more readable.

| Data Type   | Description                                | Example                                                      |
|------------|--------------------------------------------|--------------------------------------------------------------|
| **struct** | Groups different types into a single unit  | `struct Person { char name[50]; int age; };`               |
| **union**  | Similar to struct but shares the same memory for all members | `union Data { int i; float f; char c; };` |
| **enum**   | Represents a set of named constants       | `enum Color { RED, GREEN, BLUE };`                          |
| **typedef**| Creates a new name for an existing type   | `typedef unsigned int uint;`                                |

> ⚡ Note:  
> - **structs** are perfect for modeling real-world objects.  
> - **unions** save memory but can only hold **one value at a time**.  
> - **enums** make code more readable by using names instead of numbers.  
> - **typedef** simplifies type names and improves code clarity.
