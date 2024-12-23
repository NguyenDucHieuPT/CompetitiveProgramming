#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main()
{
    freopen("CHINHPHUONG.INP","r", stdin);
    freopen("CHINHPHUONG.OUT","w", stdout);
    ll l, r;
    cin >> l >> r;
    l = sqrt(l - 1);
    r = sqrt(r);
    cout << r - l;
    return 0;
}
