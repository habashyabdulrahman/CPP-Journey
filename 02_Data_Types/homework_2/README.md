# Homework 2: Students Grades System 🎓

## 📝 Description
A C++ console application that simulates a teacher's grading workflow by reading and storing Math exam records for **15 students**, displaying a structured summary of all students, and calculating the average grade for boys, girls, and the entire class.

## 🎯 Requirements
Read the following details for **15 students** using clear, step-by-step prompts:
1. **Name**
2. **ID** (Student ID)
3. **Gender** (`M` / `F`)
4. **Math Exam Grade**

After reading all inputs:
- Print a formatted report containing each student's details.
- Calculate and display:
  - Average grade for boys
  - Average grade for girls
  - Overall class average

---

## 🏗️ Architecture & Data Types Analysis

### 1. Name
- Stores text values (words/characters).
- **Selected Type:** `string`

### 2. Student ID
- Used here as simple sequential numbers (`1` to `15`).
- **Selected Type:** `int` *(Note: in larger production systems, `string` is often preferred if IDs can contain leading zeros like `01234` or exceed integer limits).*

### 3. Gender
- Uses a single character (`M` for Male, `F` for Female) to simulate a fixed choice (like a GUI dropdown/radio button), reducing input typos and saving memory compared to `string`.
- **Selected Type:** `char`

### 4. Math Grade, Sums & Averages
- Grades and averages can include decimals (e.g., `59.5`, `44.875`). Using `int` would truncate the decimal part and produce inaccurate results.
- Intermediate sum variables (`boys_sum` and `girls_sum`) are stored to avoid repeating the addition of all 15 grades when calculating the overall average.
- **Selected Type:** `double`

---

## ✨ Code Refactoring & UX Decisions
- **Grouped Variable Declarations:** Variables of the same data type are declared together on single lines to keep the top section clean and readable.
- **User-Friendly Input Flow:** Kept separate prompts for each field instead of single-line input chaining to mimic a real-world form and minimize teacher entry mistakes.
- **Floating-Point Division:** Explicit floating-point divisors (`8.0`, `7.0`, `15.0`) ensure accurate decimal averages.

---

## ⚙️ How to Compile & Run

```bash
g++ homework2_3.cpp -o homework2_3
./homework2_3
```

---

## 💻 Sample Output

```text
What is student 1 name: Ahmed
Id: 1
Gender (M/F): M
Math exam grade: 59.5
------------------
... (continues for all 15 students) ...
------------------
Students grades in math
Ahmed (with id: 1) gender is: M got grade: 59.5
Mona (with id: 2) gender is: F got grade: 58
...
Jak (with id: 15) gender is: M got grade: 27.5
Average grade for boys is: 44.875
Average grade for girls is: 47.7143
Average grade is: 46.2
```