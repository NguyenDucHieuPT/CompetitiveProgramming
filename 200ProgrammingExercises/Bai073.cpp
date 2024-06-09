#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string Test()
{
    vector <int> a(4);
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a.begin(), a.end());
    return (a[0] + a[3] == a[1] + a[2] ? "YES" : "NO");
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

