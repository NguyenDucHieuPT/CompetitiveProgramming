//author Hieu Soc
//school THPT Hung Hoa
#include <iostream>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file(name)  if (fopen (name".inp", "r") ) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); } else freopen (name".inp", "w", stdin);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define ALL(a) a.begin(), a.end();
#define Sz(x) (int)x.size();
#define HaCam int main


HaCam()
{
    fastio;
    file("HINHVUONG");
    int m;
    ll s;
    cin >> m >> s;
    ll res = s;
    FE(k, 1, m)
    {
        ll p = k * k * (k - 1) / 2;
        p *= (m + 1);
        ll d = k * k;
        if (s < p)
            break;
        if ((s - p) % d == 0)
        {
            ll x = (s - p) / d;
            ll col = x % m + (x % m == 0) * m;
            if (col + k - 1 > m)
                continue;
            res = min(res, x);
        }
    }
    cout << res;
    return 0;
}
