#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n;
    vector<int> Result;

    cin >> t;
    Result.resize(t);

    for ( int k = 0; k < t; k++)
    {
        cin >> n;
        if ( n < 3 ) continue;
        int mod = ( int ) n / 2;
        Result[k] = ( n % 2 == 0) ? mod * mod-- : mod * mod;
    }

    for (int result : Result)
        cout << result << endl;
    return 0;
}


