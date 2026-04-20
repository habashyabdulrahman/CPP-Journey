# Module 04: Data Types & Variables 📦

This module marks the beginning of my deep dive into C++ fundamentals. Here, I explored how computers store information in memory and how to choose the right "container" for different types of data.

## 🎓 Learning Objectives
- Understanding different Data Types: `int`, `double`, `float`, `char`, `string`, and `bool`.
- Mastered **Memory Management**: Choosing the correct size to prevent **Overflow** (e.g., using `long long` for large numbers).
- Implementing **Digit Manipulation**: Adding, removing, and shifting digits using arithmetic operations.
- Solving **Logical Puzzles**: Implementing decision-making logic using purely mathematical formulas without `if` statements.

---

## 📑 Assignments Index

| Assignment | Topic | Key Concepts Learned |
| :--- | :--- | :--- |
| **[HW 1-3](./homework_1/)** | Basic Operations | Input/Output, Arithmetic, and Area calculations. |
| **[HW 4](./homework_4/)** | Fibonacci Sequence | Performing a **Dry Run** and tracing manual logic. |
| **[HW 5](./homework_5/)** | Digit Manipulation | Building a number (1-8) using `num * 10 + x` logic. |
| **[HW 6-7](./homework_6/)** | Swapping Logic | Swapping 2 and 3 numbers using a `temp` variable. |
| **[HW 8](./homework_8/)** | Math-Based Logic | Using the "Multiplier Switch" to replace `if` conditions. |
| **[HW 9](./homework_9/)** | Gauss Summation | Calculating the sum of numbers from 1 to N using O(1) formula. |

## 🏆 Extra Practice (Competitive Programming)
Alongside the course homework, I apply these concepts on platforms like Codeforces.
- **[Codeforces - Difference](./Codeforces_Practice/01_Difference/)**: Handled potential memory overflow issues using `long long` when multiplying large constraints (up to 10^5).

---

## 🧪 Key Technical Takeaway: Overflow
In this module, I learned that a standard 32-bit `int` can only hold up to **2,147,483,647**. For operations involving larger numbers (like HW 9), I utilized `long long` to ensure data integrity and prevent system crashes.

---
*“In coding, as in fishing, choosing the right tool for the right depth makes all the difference.”*