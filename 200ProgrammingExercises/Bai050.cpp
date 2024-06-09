#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int TotalDigits = 0;
    while (n)
    {
        TotalDigits += n % 10;
        n /= 10;
    }
    cout << ( pow( (int) sqrt(TotalDigits), 2) == TotalDigits ? "YES" : "NO" );
    return 0;
}
