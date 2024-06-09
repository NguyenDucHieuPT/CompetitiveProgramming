#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int Test()
{
    int a, b, result = 0;
    cin >> a >> b;
    int length = abs(a - b);

    return length / 5 + (length - length / 5 * 5) / 2 + (length - length / 5 * 5 - (length - length / 5 * 5) / 2 * 2);
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

