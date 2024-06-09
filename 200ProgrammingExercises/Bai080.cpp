#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Test()
{
    int s, b, n;
    cin >> s >> b >> n;

    return min( (s + b + n) / 3, min(s, b));
}
int main()
{
    int t;
    vector<int> Result;

    cin >> t;
    while(t--)
        Result.push_back(Test());

    for (int result : Result)
        cout << result << endl;
    return 0;
}

