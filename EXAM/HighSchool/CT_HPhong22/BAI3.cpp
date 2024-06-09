
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
int p[21], t[21];
int n;
ll x;
ll SumEggs(ll T)
{
	ll res = 0;
	FL(i, 0, n)
	{
		res += 1 + (T - p[i]) / t[i];
	}
	return res;
}
void Input()
{
	cin >> n >> x;
	FL(i, 0, n)
	{
		cin >> p[i] >> t[i];
	}
}
ll BinaryTight()
{
	ll T = 1, l = 0;
	while (SumEggs(T) < x)
	{
		l = T;
		T *= 2;
	}
	//cout << l << " " << T;
	ll res = 0;
	while (l <= T)
	{
		ll mid = (l + T) / 2;
		if (SumEggs(mid) >= x)
		{
			res = mid;
			T = mid - 1;
		}
		else
			l = mid + 1;
	}
	return res;
}
HaCam()
{
    fastio;
    file("text");
    Input();
    cout << BinaryTight();
    return 0;
}