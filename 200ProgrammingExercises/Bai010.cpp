#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FindDivisors( int n, int p)
{
    int result = 0;

    if ( n < p) return 0;

    for (int i = p; i <= n ; i += p)
    {
        int x = i;
        while ( x % p == 0) result++, x /= p;
    }

    return result;
}
int main()
{
    int t, n, p;
    vector<int> Result;

    cin >> t;
    Result.resize(t);

    for ( int k = 0; k < t; k++)
    {
        cin >> n >> p;
            Result[k] = FindDivisors( n, p);
    }

    for (int result : Result)
        cout << result << endl;
    return 0;
}



