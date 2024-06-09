#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool CheckNumber( int n)
{
    return ((int) sqrt(n * 2) * ((int) sqrt(n * 2) + 1) / 2 == n ? true : false);
}
string CheckTest( int x)
{
    for ( int i = 1; i < x; i++)
        if (CheckNumber(i) && CheckNumber(x - i))
            return "YES";
    return "NO";
}
int main()
{
    vector <string> Result;
    int T, A;
    cin >> T;
    while (T--)
    {
        cin >> A;
        Result.push_back(CheckTest(A));
    }
    for ( string result : Result)
        cout << result << endl;
    return 0;
}
