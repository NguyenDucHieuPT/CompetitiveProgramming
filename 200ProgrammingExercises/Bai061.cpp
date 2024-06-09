#include <iostream>
using namespace std;
int TotalDigits( int x)
{
    int result = 0;
    while(x)
        result += x % 10,
        x /= 10;
    return result;
}
int main()
{
    int a, Min;
    cin >> a;
    bool ok = false;
    for ( int i = 1; i < 72; i++)
        if (( a % i == 0) && (TotalDigits(a / i) == i) && ( ok == false || Min > a / i))
                Min = a / i,
                ok = true;
    cout << ( ok ? Min : -1);
    return 0;
}
