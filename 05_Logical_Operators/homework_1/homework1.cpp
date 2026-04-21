#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 30, d = 40;

    cout << (a + b == c) <<endl;
    cout << (a + b + c >= 2 * d) <<endl;

    cout << (a > 5 || d < 30) <<endl;
    cout << (a > 5 && d < 30) <<endl;
    cout << (a <= b && b < 30) <<endl;

    cout << (a > 5 && d > 30 || c - d == 10) <<endl;
    cout << (a <= b && b <= c && c <= d) <<endl;

    cout << (a > 5 && d < 30 || c > d || d % 2 ==0) <<endl;
    cout << (a > 5 && d < 30 || c > d && d % 2 ==0) <<endl;

    cout << (a ==10 || b != 20 && c != 30 || d != 40) <<endl;
    cout << ((a == 10 || b != 20) && c != 30 || d != 40) <<endl;
    
    return 0;
}