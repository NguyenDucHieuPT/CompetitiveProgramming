//author Hieu Soc
//school THPT Hung Hoa
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file(name)  if (fopen (name".inp", "r") ) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); } else freopen (name".inp", "w", stdin);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define HaCam int main


HaCam()
{
    fastio;
    file("HINHVUONG");
    int m;
    ll s, d;
    cin >> m >> s;
    FL(i, 1, m + 1)
    {
        ll c = 0;
        FL(j, 1, i + 1)
            c += ((j - 1) * m + (j - 1) * m + i-1) * i / 2;
        if (s > c)
            if ((s - c) % (i * i) == 0)
                d = (s - c) / (i * i);
    }
    cout << d;
    return 0;
}