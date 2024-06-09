#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Test()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for ( int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int d = 0;
    for ( int i = 0; i < n - 1; i++)
        if ( abs(a[i] - a[i + 1]) == 1)
            d++;
    return (d ? 2 : 1);
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

