#include<iostream>
using namespace std;

int main() {
    int a, b, c, temp;
    
    // 1. Read inputs
    cin >> a >> b >> c;

    // 2. TODO: Write the 4 lines to swap them correctly 
    // a = 115, b = 20, c = 301 
    // a = 20, b = 301, c = 115

    temp = a;
    a = b;
    b = c;
    c = temp;

    cout << a << " " << b << " " << c << endl;
    
    return 0;
}