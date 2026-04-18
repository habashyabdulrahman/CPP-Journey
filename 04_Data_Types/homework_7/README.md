# Homework 7: Swapping 3 Numbers! 🔄🔄

## 📝 Problem Statement
Write a program that reads 3 variables: `a`, `b`, and `c`. 
Your target is to **swap** their values in a circular sequence:
- `a` takes the value of `b`
- `b` takes the value of `c`
- `c` takes the value of `a`

## 🎯 Example
**Initial Values:** `a = 115`, `b = 20`, `c = 301`

**Target (Final) Values:** `a = 20`, `b = 301`, `c = 115`

---

## 🏗️ Senior Engineer Analysis (Hints)

**The "Three Glasses" Analogy:**
You now have three glasses:
- Glass `a` (Apple Juice)
- Glass `b` (Orange Juice)
- Glass `c` (Mango Juice)

You want to move Orange to `a`, Mango to `b`, and Apple to `c`.
*Question for you:* Do we need TWO extra empty glasses to do this? 
**Answer:** No! We still only need **ONE** empty glass (`temp`). The secret is in the **order** of pouring.

**Step-by-step logic:**
1. Save the juice from glass `a` into the empty glass `temp` (so we don't lose it).
2. Now glass `a` is safe to overwrite. Pour glass `b` into glass `a`.
3. Now glass `b` is safe to overwrite. Pour glass `c` into glass `b`.
4. Finally, pour the juice we saved in `temp` into glass `c`.

---

## 💻 My Solution
```cpp
#include<iostream>
using namespace std;

int main() {
    int a, b, c, temp;
    
    // 1. Read inputs
    cin >> a >> b >> c;

    // 2. TODO: Write the 4 lines to swap them correctly
    // 
    // 
    // 
    // 

    // 3. Print results
    cout << a << " " << b << " " << c << endl;
    
    return 0;
}