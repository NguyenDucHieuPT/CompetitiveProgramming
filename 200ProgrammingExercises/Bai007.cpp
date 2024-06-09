#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n;
    vector<int> Result, Mouse, Cave;
    cin >> t;
    Result.resize(t);
    for ( int k = 0; k < t; k++)
    {
        cin >> n;
        Mouse.resize(n);
        Cave.resize(n);

        for ( int i = 0; i < n; i++) cin >> Mouse[i];
        for ( int i = 0; i < n; i++) cin >> Cave[i];

        sort( Mouse.begin(), Mouse.end() );
        sort( Cave.begin(), Cave.end() );

        for ( int i = 0; i < n; i++)
            Result[k] = max( Result[k], abs( Mouse[i] - Cave[i]));
    }
    for (int result : Result)
        cout << result << endl;
    return 0;
}

