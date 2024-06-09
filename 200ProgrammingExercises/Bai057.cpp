#include <iostream>
#include <math.h>
#define lli long long
using namespace std;

int main()
{
    int x;
    cin >> x;
    lli TD;
    TD = ( pow( (int)sqrt(x), 2) == x ? sqrt(x) + 1 : 1);
    int Const = 2;
    while(Const < sqrt(x))
    {
        if ( x % Const == 0)
            TD += x / Const + Const;
        Const ++;
    }
    cout << ( TD > x ? 1 : 0);
    return 0;
}
