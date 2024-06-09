#include <iostream>
#include <vector>
using namespace std;
bool check( int x)
{
    vector <int> dpp(10);
    dpp.assign(10,0);
    while(x)
    {
        if (dpp[x % 10])
            return false;
        else
            dpp[x % 10]++;
        x /= 10;
    }
    return true;
}
int main()
{
    int l, r;
    cin >> l >> r;
    while ( l <= r)
    {
        if (check(l))
        {
            cout << l;
            return 0;
        }
        l++;
    }
    cout << -1;
    return 0;
}
