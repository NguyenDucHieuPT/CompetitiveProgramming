#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, x, y, n;
    vector<int> Result;

    cin >> t;
    Result.resize(t);

    for ( int k = 0; k < t; k++)
    {
        cin >> x >> y >> n;
        if ( n % 2 )
            x *= 2;
        if ( x < y)
            swap( x, y);
        Result[k] = ( int) x / y;
    }
    for (int result : Result)
        cout << result << endl;
    return 0;
}
