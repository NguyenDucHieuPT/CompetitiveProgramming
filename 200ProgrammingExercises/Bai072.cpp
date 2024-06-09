#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string Test()
{
    int a, b, n, S;
    cin >> a >> b >> n >> S;

    if ( ( a > S / n ? S / n : a) * n + b >= S)
        return "YES";
    else
        return "NO";
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

