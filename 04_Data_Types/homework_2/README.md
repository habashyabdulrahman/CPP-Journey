# Homework 2: Students Grades System 🎓

## 📝 Description
A simple program requested by a teacher to read and store the information of two students for a Math exam, and then print this information back to the console.

## 🎯 Requirements
Read the following details for **two students**:
1. **Name**
2. **ID** (Student ID)
3. **Grade** (Math exam score)

After reading both students' data, print them clearly on the screen.

---

## 🏗️ Architecture & Data Types Analysis (Crucial Step)
As a good software engineer, NEVER assume data types blindly. Analyze each input:

### 1. Name
- Needs to store text (words/characters).
- **Selected Type:** `[Think about it]`

### 2. Student ID
- IDs are usually numbers, BUT:
  - Can an ID start with zero? (e.g., `01234`)
  - Are we going to perform math operations (+, -, *, /) on an ID? No.
  - Can it be larger than 2 billion (`2147483647`)? Yes.
- **Selected Type:** `[Think about it]`

### 3. Math Grade
- *Teacher's Hint: "Is exam’s grade an integer?"*
- No! A student can score `95.5` or `80.25`. If we use `int`, the computer will truncate the decimal part (e.g., `95.5` becomes `95`), which means the student loses marks!
- **Selected Type:** `[Think about it]`

---

## 💻 My Solution
// Space to write your C++ code

What is student 1 name: Ahmed
His ID: 01
His math exam grade: 30.4

What is student 2 name: Ali
His ID: 02
His math exam grade: 70.6

Students grades in math. 
Ahmed (with id 01) got grade: 30.4
Ali (with id 02) got grade: 70.6
Average grade is 50.5