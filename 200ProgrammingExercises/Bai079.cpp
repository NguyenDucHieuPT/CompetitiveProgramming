#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string Test()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    if ((a + b) % 3 == 0 && 2 * a >= b)
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

