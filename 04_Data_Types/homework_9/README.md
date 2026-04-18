# Homework 9: Sum numbers from 1 to N 🧮

## 📝 Problem Statement
Write a program that reads an integer `N` and prints the sum of all numbers from `1` to `N`.

**Examples:**
- If `N = 3`, Output: `6` (because 1 + 2 + 3 = 6)
- If `N = 4`, Output: `10` (because 1 + 2 + 3 + 4 = 10)
- If `N = 5`, Output: `15` (because 1 + 2 + 3 + 4 + 5 = 15)

## 🎯 Target & Constraints
- Find a **simple 1-line formula** to solve the problem without using loops.
- The formula must work for both **even** and **odd** values of `N`.

## 💡 Thinking Hint
Let `N = 8`. Write the numbers from 1 to 8:
`1, 2, 3, 4, 5, 6, 7, 8`
- What is the sum of the 1st and 8th number? (1 + 8 = 9)
- What is the sum of the 2nd and 7th number? (2 + 7 = 9)
- 3rd and 6th? (3 + 6 = 9)
- 4th and 5th? (4 + 5 = 9)
Notice the pattern! How many pairs do we have? And what is the sum of each pair?

## ⚠️ The Senior Programmer Trap (Overflow)
What is the maximum `N` before an overflow occurs? 
*Recall that the maximum value for a 32-bit signed `int` is `2147483647`.*

---

## 💻 My Solution
```cpp
#include<iostream>
using namespace std;

int main() {
    long long n;
    
    // 1. Read N
    cin >> n;

    // 2. TODO: Write the 1-line formula
    // long long sum = ...

    // 3. Print the result
    // cout << sum << endl;
    
    return 0;
}