# Homework 3: Simplify Logic Expressions (Optional) 🧠

## 📝 Problem Statement
This assignment focuses on mentally compiling and simplifying complex logical expressions step-by-step to reach a final boolean value (`True` or `False`).

**Key Rules Applied:**
1. Parentheses `()` are evaluated first.
2. Logical AND `&&` has higher priority than Logical OR `||`.
3. Execution proceeds from left to right for operators of the same priority.

---

## 🔍 Step-by-Step Simplification

### Expression 1
`T && T && F && T`
- Step 1: `(T && T)` ➡️ `T`
- Step 2: `T && F` ➡️ `F`
- Step 3: `F && T` ➡️ `F`
- **Final:** `0 (False)`

### Expression 2
`T && T && F && T || T && T`
- Step 1 (ANDs first): `(T && T && F && T) || (T && T)`
- Step 2: `(F) || (T)`
- **Final:** `1 (True)`

### Expression 3
`T && T && T && T || T && (T || F)`
- Step 1 (Brackets): `T && T && T && T || T && (T)`
- Step 2 (ANDs): `(T) || (T)`
- **Final:** `1 (True)`

### Expression 4
`T && T && T || T && (F || (T && (T && T)))`
- Step 1 (Inner Brackets): `(T && T)` ➡️ `T`
- Step 2 (Next Brackets): `(T && T)` ➡️ `T`
- Step 3 (OR Bracket): `(F || T)` ➡️ `T`
- Step 4 (Apply ANDs): `(T && T && T) || (T && T)` ➡️ `T || T`
- **Final:** `1 (True)`

### Expression 5
`T && T || T && F && T || T && T && F || (T && (T || F))`
- Step 1 (Bracket): `(T || F)` ➡️ `T`
- Step 2 (Group ANDs): `(T && T) || (T && F && T) || (T && T && F) || (T && T)`
- Step 3 (Simplify Groups): `(T) || (F) || (F) || (T)`
- **Final:** `1 (True)`

### Expression 6
`T && T || T && F && T || (T && T && F || (T && (T || F)))`
- Step 1 (Inner Bracket): `(T && (T))` ➡️ `T`
- Step 2 (Outer Bracket): `(T && T && F || T)` ➡️ `(F || T)` ➡️ `T`
- Step 3 (Main ANDs): `(T && T) || (T && F && T) || T`
- Step 4 (Simplify): `T || F || T`
- **Final:** `1 (True)`

### Expression 7
`(T && T || T && F && T || T) && T && F || (T && (T || F))`
- Step 1 (First Big Bracket): `(T || F || T)` ➡️ `T`
- Step 2 (Second Bracket): `(T && T)` ➡️ `T`
- Step 3 (Substitute): `T && T && F || T`
- Step 4 (Group ANDs): `(T && T && F) || T` ➡️ `F || T`
- **Final:** `1 (True)`

### Expression 8
`T && T || T && (F && T || T && T) && F || (T && (T || F))`
- Step 1 (Middle Bracket): `(F || T)` ➡️ `T`
- Step 2 (Last Bracket): `(T && T)` ➡️ `T`
- Step 3 (Substitute): `T && T || T && (T) && F || T`
- Step 4 (Group ANDs): `(T && T) || (T && T && F) || T`
- Step 5 (Simplify): `T || F || T`
- **Final:** `1 (True)`