# Homework 3: Even and Odd Sum 🧮

## 📝 Description
A program that reads **8 space-separated integers** from the user. It calculates and prints:
1. The sum of the numbers in the **even places** (2nd, 4th, 6th, 8th).
2. The sum of the numbers in the **odd places** (1st, 3rd, 5th, 7th).

## 🎯 Example
**Input:**
`11 2 7 9 12 -8 3 -1`

**Output:**
`2 33`

**Explanation:**
- Even places sum: `2 + 9 + (-8) + (-1) = 2`
- Odd places sum: `11 + 7 + 12 + 3 = 33`

---

## 🏗️ Senior Engineer Analysis (Hints)
Before writing code, let's break down the logic:

1. **The "Place" Trap:**
   Do NOT check if the number itself is even or odd (e.g., using `% 2`). The problem asks for the **position** (place) of the number, not its value. 
   - `11` is an odd number, but it is in the **1st place** (which is an odd position).
   - `2` is an even number, and it is in the **2nd place** (which is an even position).

2. **The "No Arrays" Constraint:**
   Since we haven't learned Arrays or Loops yet, how will we store 8 different numbers in memory at the same time? 
   *Hint: Yes, you have to do it the hard way!*

---

## 💻 My Solution
// Space to write your C++ code

