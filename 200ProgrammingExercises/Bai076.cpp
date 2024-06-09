#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Test()
{
    int x;
    cin >> x;
    if ( x == 2)
        return 2;
    else if ( x % 2 )
        return 1;
    else
        return 0;
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

