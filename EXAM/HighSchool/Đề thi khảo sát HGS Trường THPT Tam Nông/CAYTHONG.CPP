#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;

const int MaxN = 1e5 + 1;
int a[MaxN], b[MaxN], n;
int Find(int x)
{
    int pos = lower_bound(b, b + n, -x) - b;
    pos = min(max(pos, 0), n - 1);
    if (pos != 0)
        return min(abs(x + b[pos]), abs(x + b[pos - 1]));
    else
        return min(abs(x + b[0]), abs(x + b[1]));
}
int main()
{
    int MinValue = 2e9 + 1;
    freopen("CAYTHONG.INP","r", stdin);
    freopen("CAYTHONG.OUT","w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b, b + n);
    for(int i = 0; i < n; i++)
        MinValue = min(MinValue, Find(a[i]));
    cout << MinValue;
    return 0;
}

