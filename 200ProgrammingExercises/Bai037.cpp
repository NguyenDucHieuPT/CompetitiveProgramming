#include <iostream>
#include <math.h>
using namespace std;

const int size = 10e6;
bool check[size];
int n;

void BuildCheck()
{
    for ( int i = 2; i <= n; i++)
        check[i] = false;
    for ( int i = 2; i <= sqrt(n); i++)
        if (check[i] == false)
            for ( int j = 2 * i; j <= n; j += i)
                check[j] = true;
}
int main()
{
    cin >> n;
    BuildCheck();
    for ( int i = 4; i <= n; i++)
        if ( check[i] && check[n - i])
        {
            cout << i << " " << n - i;
            return 0;
        }
        return 0;
}

