#include <iostream>
#include <algorithm>
#define lli long long
using namespace std;
lli ReverseNumbers( lli x)
{
    lli result = 0;
    while (x)
        result = result * 10 + x % 10, x /= 10;
    return result;
}
int main()
{
    lli a, b;
    cin >> a >> b;
    cout << max( ReverseNumbers(a), ReverseNumbers(b));
    return 0;
}
