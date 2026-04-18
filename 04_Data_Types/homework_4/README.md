# Homework 4: Guess Program Output 🧠

## 📝 Problem Statement
You are given a C++ program. **Without running it in your IDE (VS Code)**, you need to perform a "Dry Run" (trace the code manually) and guess what numbers will be printed on the screen.

## 💻 The Code

```cpp
#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3<<"\n"; 

    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
    
    ---------------------------------------------------------------
    num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

    // [https://en.wikipedia.org/wiki/Fibonacci_number](https://en.wikipedia.org/wiki/Fibonacci_number)

    return 0;
}