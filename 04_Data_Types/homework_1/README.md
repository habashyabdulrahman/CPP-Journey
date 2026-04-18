# Homework 1: Math Operations Tool 🧮

## 📝 Description
A simple command-line program that reads two numbers from the user and performs basic arithmetic operations: Addition, Subtraction, Multiplication, and Division.

## 🎯 Requirements
1. Read **two numbers** from the input.
2. Print the results for:
   - `+` (Addition)
   - `-` (Subtraction)
   - `*` (Multiplication)
   - `/` (Division)

---

## 🧪 Testing Scenarios (Edge Cases)
As a Backend Engineer, you must test your code against these scenarios to ensure stability:

### 1. Basic Test
- **Inputs:** `12`, `3`
- **Expected Results:** `15`, `9`, `36`, `4.0`

### 2. Zero Handling
- **Zero as 2nd number:** (e.g., `12, 0`) -> *Caution: Check for Division by Zero error!*
- **Zero as 1st number:** (e.g., `0, 5`)

### 3. Negative Values
- **Inputs:** `-5, -10` or `5, -2`

### 4. Parity (Even/Odd)
- **Inputs:** `7, 2` (Check how your language handles decimal division).

### 5. Large Numbers (Integer Overflow)
- **Input:** `2147483647` (The Maximum value for a 32-bit Signed Integer).
- *Observe what happens when you add 1 to this number.*

---

## 💻 My Solution
// Space to write your notes or logic