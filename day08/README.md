# 📘 Day 8 – Learning C  
## Understanding `sizeof()` and `limits.h`

Today’s focus is on two core concepts: the `sizeof()` operator and the `limits.h` header.

---

## 🔎 `sizeof()` Operator

The `sizeof()` operator is used to determine the amount of memory (in bytes) required to store different elements in C. It can be applied to:

- Data types  
- Variables  
- Expressions  
- Pointers  

This helps make programs more portable and ensures they adapt correctly to different system architectures.

---

## 📏 Data Type Limits (`limits.h`)

The `limits.h` header provides predefined constants that describe the minimum and maximum values for the fundamental integer types in C.

Key points:

- Includes constants for the limits of `char`, `short`, `int`, `long`, and others  
- Values are globally available once the header is included  
- Constants (We can't modify)
- Useful for ensuring values stay within valid ranges  

---

## ✅ Summary

- `sizeof()` tells you how much memory a type, variable, expression, or pointer uses.  
- `limits.h` provides predefined constants describing the numeric limits of C’s built-in integer types.  

---
