#include <iostream>
#include <vector>
#define lli long long
using namespace std;
lli water( lli n, lli a, lli b)
{
    if (2 * a <= b)
        return n * a;
    else
        return (n % 2 ? a + n / 2 * b : n / 2 * b);
}
int main()
{
    int t;
    vector<lli> Result;

    cin >> t;

    for ( int k = 0; k < t; k++)
    {
        lli a, b, n;
        cin >> n >> a >> b;
        Result.push_back(water(n, a, b));
    }
    for (lli result : Result)
        cout << result << endl;
    return 0;
}

