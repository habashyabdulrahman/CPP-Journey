#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Please enter two integers: ";
    cin >> num1 >> num2;

    cout << "--- Doing Addition ---" << endl;
    cout << num1 + num2 << endl;

    cout << "--- Doing Subtraction ---" << endl;
    cout << num1 - num2 << endl;

    cout << "--- Doing Multiplication ---" << endl;
    cout << num1 * num2 << endl;
    
    cout << "--- Doing Division ---" << endl; // نقطة التفتيش الأخيرة
    cout << num1 / num2 << endl;

    cout << "--- Program Finished Successfully ---" << endl;

    return 0;
}