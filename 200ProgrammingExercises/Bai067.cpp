#include <iostream>
#include <math.h>
#define lli long long
using namespace std;

int main()
{
    lli n, m = 0, p, n2 = 1;
    cin >> n;
    while (n2 <= n)
    {
        n2 *= 2;
        m++;
    }
    n2 /= 2;
    p = n - n2;
    cout << --m << " " << p;
    return 0;
}
