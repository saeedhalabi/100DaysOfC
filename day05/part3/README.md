# Day 5 – Characters & ASCII in C

Today’s session focused on the **`char` data type** and how characters are represented internally in C.

## What I Learned

- A `char` stores an **integer value** that represents a character.
- These integer values come from the **ASCII table**.
- Examples:
  - `'A'` → 65  
  - `'a'` → 97  
  - `'0'` → 48
- Even though we write characters in single quotes, the computer actually stores their ASCII numbers.
- A `char` uses **1 byte** of memory.
- Depending on the compiler, `char` can be:
  - **signed** → range: -128 to 127  
  - **unsigned** → range: 0 to 255  

## Key Takeaway

Characters in C are basically numbers with meaning.  
The ASCII table is what maps those numbers to symbols we recognize.