#include <iostream>
#define lli long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    lli result = 0;
    for ( int i = 1; i <= n; i++)
        result += (lli) i * (i + 1) / 2;
    cout << result;
    return 0;
}
