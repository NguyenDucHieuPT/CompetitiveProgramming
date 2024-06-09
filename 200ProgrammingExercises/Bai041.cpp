#include <iostream>
#define lli long long
using namespace std;

int main()
{
    lli n, a, b, c, t = 0, k;
    cin >> n >> a >> b >> c;
    k = b - c;
    if ( a > k && n >= b)
    {
        t = ( n - b ) / k + 1;
        n -= t * k;
    }
    t += n / a;
    cout << t;
    return 0;
}

