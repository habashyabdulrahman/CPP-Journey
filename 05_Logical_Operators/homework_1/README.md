# Homework 1: Logical & Relational Operators (Guess the Output) 🧠

## 📝 Problem Statement
In this assignment, I practiced predicting the output of complex logical and relational expressions in C++. The goal was to understand how the compiler evaluates multiple operators in a single line.

**Initial Values:**
- `a = 10`, `b = 20`, `c = 30`, `d = 40`

## ⚖️ The "Precedence" Lesson
The most critical takeaway from this homework is **Operator Precedence**. In C++, logical operators do not always execute from left to right.
1. **Arithmetic** (+, -, *, /) is evaluated first.
2. **Relational** (==, !=, <, >) is evaluated next.
3. **Logical AND (&&)** is evaluated before **Logical OR (||)**.
4. **Parentheses ()** can be used to override all rules.

## 📊 Expression Analysis
| # | Expression | Manual Evaluation | Result | Key Note |
|:---:|:---|:---|:---:|:---|
| 1 | `a + b == c` | `30 == 30` | `1` | Arithmetic first |
| 2 | `a + b + c >= 2 * d` | `60 >= 80` | `0` | Multiplication first |
| 3 | `a > 5 \|\| d < 30` | `1 \|\| 0` | `1` | OR needs only one true |
| 4 | `a > 5 && d < 30` | `1 && 0` | `0` | AND needs both true |
| 5 | `a <= b && b <= c` | `1 && 1` | `1` | Sequential check |
| 8 | `a > 5 && d < 30 \|\| c > d \|\| d % 2 == 0` | `(1 && 0) \|\| 0 \|\| 1` ➡️ `0 \|\| 0 \|\| 1` | `1` | `&&` executes first! |
| 10 | `a == 10 \|\| b != 20 && c != 30 \|\| d != 40` | `1 \|\| (0 && 0) \|\| 0` ➡️ `1 \|\| 0 \|\| 0` | `1` | The `&&` trap! |
| 11 | `((a == 10 \|\| b != 20) && c != 30 \|\| d != 40)` | `((1 \|\| 0) && 0 \|\| 0)` ➡️ `(1 && 0) \|\| 0` | `0` | Brackets change precedence |

---
## 🛠️ Implementation Summary
- Avoided using `if` statements.
- Printed boolean results directly as `1` or `0`.
- Learned that `&&` acts like multiplication and `||` acts like addition in terms of priority.