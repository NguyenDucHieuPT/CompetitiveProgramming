#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for ( int x = 0 ; x <= n; x++)
        if ( 3 * (n - x) <= k - 2 * x && k - 2 * x <= 5 * (n - x))
        {
            cout << x;
            return 0;
        }
    return 0;
}
