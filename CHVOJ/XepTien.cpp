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
bool comp(ii a, ii b)
{
    if (a.se != b.se)
        return a.se < b.se;
    else
        return a.fi > b.fi;
}
vector<ii> a;
HaCam()
{
    fastio;
    file("xeptien");
    
    int n;
    cin >> n;
    a.resize(n);
    FT(x, a)
        cin >> x.fi >> x.se;
    sort(a.begin(), a.end(), comp);
    FT(x, a)
        cout << x.fi << " " << x.se << endl;
    return 0;
}
