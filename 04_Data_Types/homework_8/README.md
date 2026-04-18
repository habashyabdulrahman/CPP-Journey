# Homework 8: Print Me (The Final Boss) 🐉

## 📝 Problem Statement
Write a program that reads 2 integers: `A` and `B`. 
- **Note:** The value of `B` will ALWAYS be strictly either `-1` or `1`.

**Your Target:**
- If `B` is `-1`, print the result of: `2 * A + 1`
- If `B` is `1`, print the result of: `A * A`

## 🚫 Hard Constraints (The Catch)
- Do **NOT** use `if` conditions (even if you know them).
- Do **NOT** use comparison operators (e.g., `==`, `<=`, `>=`, `!=`, etc.).

---

## 🏗️ Senior Engineer Analysis (Hints)

How can we make a decision without using `if`? We use **Math**! 
We need to create a single 1-line mathematical equation that acts like a switch. 

**The "Multiplier Switch" Concept:**
Imagine the final equation looks like this:
`Result = (Switch_1 * Equation_1) + (Switch_2 * Equation_2)`

You want `Switch_1` and `Switch_2` to output either `0` or `1` based on the value of `B` so that one side gets multiplied by `1` (activated) and the other gets multiplied by `0` (canceled out).

- When `B = 1`: We want a math formula that gives `1`.
- When `B = -1`: We want that SAME formula to give `0`.
*(Hint: What happens if you do `B + 1`? And what if you divide that by `2`?)*

---

## 💻 My Solution
```cpp
#include<iostream>
using namespace std;

int main() {
    int a, b;
    
    // 1. Read A and B
    cin >> a >> b;

    // 2. TODO: Write the 1-line magic math formula
    // int result = ...

    // 3. Print the result
    // cout << result << endl;
    
    return 0;
}