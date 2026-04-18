#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3 = -1;
    
    cin >> num1 >> num2; // Let's say we read 7 and 231

    // TODO: Write 3 lines of code that swap them num1 - 7, num2 = 231
    num3 = num2;
    num2 = num1;
    num1 = num3;

    cout << num1 << " " << num2 << endl; // This should print 231 7
    
    return 0;
}