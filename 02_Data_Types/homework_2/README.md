# Homework 2: Students Grades System 🎓

## 📝 Description
A C++ console application that reads and stores Math exam records for **15 students**, displays a formatted summary of all students, and calculates the average grade for boys, girls, and the entire class.

## 🎯 Requirements
Read the following details for **15 students**:
1. **Name**
2. **ID** (Student ID)
3. **Gender** (`male` / `female`)
4. **Math Exam Grade**

After reading all inputs:
- Print a structured report of every student's details.
- Calculate and display:
  - Average grade for boys
  - Average grade for girls
  - Overall class average

---

## 🏗️ Architecture & Data Types Analysis

### 1. Name & Gender
- Both store text values (words/characters).
- **Selected Type:** `string`

### 2. Student ID
- Used here as simple sequential numbers (`1` to `15`).
- **Selected Type:** `int` *(Note: in larger real-world systems, `string` is often preferred if IDs can contain leading zeros like `01234` or exceed integer limits).*

### 3. Math Grade & Averages
- Grades and averages can include decimals (e.g., `59.5`, `44.875`). Using `int` would truncate the decimal part and cause inaccurate results.
- **Selected Type:** `double`

---

## ⚙️ How to Compile & Run

```bash
g++ homework2_2.cpp -o homework2_2
./homework2_2
```

---

## 💻 Sample Output

```text
What is student 1 name: Ahmed
Id: 1
Gender: male
Math exam grade: 59.5
------------------
... (continues for all 15 students) ...
------------------
Students grades in math
Ahmed (with id: 1) gender is: male got grade: 59.5
Mona (with id: 2) gender is: female got grade: 58
...
Jak (with id: 15) gender is: male got grade: 27.5
Average grade for boys is: 44.875
Average grade for girls is: 47.7143
Average grade is: 46.2
```