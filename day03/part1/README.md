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
