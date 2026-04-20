#include<iostream>
using namespace std;

int main() {
    long long a;
    long long b;
    long long c;
    long long d;
    
    cin >> a >> b >> c >> d;

    long long result = ((a * b) - (c * d));

    cout << "Difference = " << result << endl;
    
    return 0;
}