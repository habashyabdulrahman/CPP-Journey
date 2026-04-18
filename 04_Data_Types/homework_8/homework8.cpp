#include<iostream>
using namespace std;

int main() {
    int a, b;
    
    // 1. Read A and B
    cin >> a >> b;

    // 2. TODO: Write the 1-line magic math formula
    // int result = ...

    //int result = (المفتاح الأول * (A * A)) + (المفتاح التاني * (2 * A + 1));
    int result = (((b + 1) / 2) * (a * a)) + (((1 - b) / 2) * (2 * a + 1));
    cout << result << endl;

    // 3. Print the result
    // cout << result << endl;
    
    return 0;
}