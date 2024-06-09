#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int TotalDigits( int x)
{
    if ( x == 0)
        return 0;
    else
        return x % 10 + TotalDigits( (int) x / 10);
}
int main()
{
    int t;
    vector<int> Result;
    cin >> t;
    Result.resize(t);
    for ( int k = 0; k < t; k++)
    {
        cin >> Result[k] ;
        while ( Result[k] > 9)
            Result[k] = TotalDigits( Result[k]);
    }
    for (int result : Result)
        cout << result << endl;
    return 0;
}

