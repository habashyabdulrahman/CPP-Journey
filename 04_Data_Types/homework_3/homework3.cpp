#include<iostream>
using namespace std;

int main()
{
    int num1;

    int num2;

    int num3;

    int num4;

    int num5;

    int num6;

    int num7;

    int num8;
    cout<<"Enter Namber: ";
    cin>> num1 >>num2 >>num3 >>num4 >>num5 >>num6 >>num7 >>num8;

    int oddSum = num1 + num3 + num5 + num7;

    int evenSum = num2 + num4 + num6 + num8;

    cout<<"Even Sum: " <<evenSum <<" | " <<"Odd Sum: " <<oddSum;

    return 0;
}