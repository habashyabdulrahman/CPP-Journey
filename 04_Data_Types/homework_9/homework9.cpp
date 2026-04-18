#include<iostream>
using namespace std;

int main() {
    long long n;
    
    // 1. Read N
    cin >> n;

    // 2. TODO: Write the 1-line formula
    long long sum = ((n + 1) * n) / 2;
    // long long sum = ...

    // 3. Print the result
    cout << sum << endl;
    
    return 0;
}