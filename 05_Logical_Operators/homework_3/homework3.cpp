#include <iostream>
using namespace std;

int main() {

    bool T = 1; // True
    bool F = 0; // False

    cout << "Expression 1: " << (T && T && F && T) << '\n'; // 0
    cout << "Expression 2: " << (T && T && F && T || T && T) << '\n'; // 1
    cout << "Expression 3: " << (T && T && T && T || T && (T || F)) << '\n';
    cout << "Expression 4: " << (T && T && T || T && (F || (T && (T && T)))) << '\n';
    cout << "Expression 5: " << (T && T || T && F && T || T && T && F || (T && (T || F))) << '\n';
    cout << "Expression 6: " << (T && T || T && F && T || (T && T && F || (T && (T || F)))) << '\n';
    cout << "Expression 7: " << ((T && T || T && F && T || T) && T && F || (T && (T || F))) << '\n';
    cout << "Expression 8: " << (T && T || T && (F && T || T && T) && F || (T && (T || F))) << '\n';

    return 0;
}