#include <iostream>
using namespace std;

int main()
{

    int nb = 0; // 30
    int ng = 0; // 20
    int nt = 0; // 6

    
    cin >> nb >> ng >> nt;
    
    cout << "Condition 1 : " << ( nb > 25 ) << '\n';

    cout << "Condition 2 : " << ( ng <= 30 ) << '\n';
    
    cout << "Condition 3 : " << ( nb > 20 && nt > 2 || ng > 30 && nt > 4 ) << '\n';
    
    cout << "Condition 4 : " << ( nb < 60 || ng < 70 ) << '\n';
    
    cout << "Condition 5 : " << !(nb >= 60 || ng >= 70) << '\n';
    
    cout << "Condition 6 : " << (nb - ng == 10) << '\n';

    cout << "Condition 7 : " << ( (nb - ng > 10) || (ng - nb > 10) || (nt > 5) ) << '\n';

    cout << "Condition 8 : " << ( (nb - ng == 10) || (ng - nb == 15) ) << '\n';

    return 0;
}
