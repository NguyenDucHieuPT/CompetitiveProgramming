#include <iostream>
#include <math.h>
#define lli long long
using namespace std;

int main()
{
    lli n, k;
    cin >> n >> k;
    lli sum = n;
    while(k--)
    {
        n *= 10;
        sum += n;
    }
    cout << sum;
    return 0;
}
