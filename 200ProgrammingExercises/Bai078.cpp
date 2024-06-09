#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string Test()
{
    int x, y;
    cin >> x >> y;

    if ( x > 3 )
        return "YES";
    else if ( x == 1)
        return ( y == 1 ? "YES" : "NO");
    else
        return ( y < 4 ? "YES" : "NO");
}
int main()
{
    int t;
    vector<string> Result;

    cin >> t;
    while(t--)
        Result.push_back(Test());

    for (string result : Result)
        cout << result << endl;
    return 0;
}

