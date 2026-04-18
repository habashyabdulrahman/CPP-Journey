# Homework 5: Guess Program Output 🧮

## 📝 Problem Statement
This is another "Dry Run" exercise. You are given a C++ program that manipulates a single integer variable `num` using various arithmetic operators. **Without running the code**, trace the value of `num` line by line and guess the final printed output.

## 💻 The Code

```cpp
#include<iostream>
using namespace std;

int main() {
    int num = 0;

    ++num;
    num *= 10;
    num += 2;
    num = num * 10;
    num += 3;
    num = num * 10 + 4;
    num = 5 + num * 10;
    num = (num * 10 + 6) * 10 + 7;
    num = 5 * num * 2 * 1 + 5 + 2 + 1;

    cout<<num<<"\n"; = 12,345,678

    return 0;
}