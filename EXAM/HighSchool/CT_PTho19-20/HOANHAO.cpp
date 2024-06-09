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
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FT(x,a) for (auto &x: a)
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define HaCam int main

const int MxN = 1e6+11;
ll p[MxN];
HaCam()
{
    fastio;
    file("HOANHAO");
    int n, k;
    cin >> n >> k;
    p[0] = 0;
    FE(i, 1, n)
    {
    	cin >> p[i];
    	p[i] += p[i - 1];
    }
    ll  Max = -(int) INFINITY;
    FE(i, 1, n)
    	FE(j, i, n)
    	{
    		if (p[j] - p[i - 1] < k)
    			continue;
    		Max = max((p[j] - p[i - 1]) / (j - i + 1), Max);
    	}
    cout << Max;
    return 0;
}
