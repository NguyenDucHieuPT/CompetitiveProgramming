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
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FN(n) for (int i=1;i<=n;i++)
#define FT(x,a) for (auto &x: a)
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define HaCam int main
using namespace std;
const int N =1e5 + 2;
const int LG = __lg(N);
int a[N], st[LG + 1][N], n;
ll M;

void preprocess()
{
    FE(i, 1, n)
        st[0][i] = a[i];
    FE(j, 1, LG)
        for (int i = 1; i + (1 << j) - 1 <= n; i++)
            st[j][i] = max(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
}
int queryMax(int l, int r)
{
    int k = __lg(r - l + 1);
    return max(st[k][l], st[k][r - (1 << k) + 1]);
}

ll TotalWater(int x)
{
	ll res = 0;
	FE(i, 2, n - 1)
		res += max(0ll, (ll) min(queryMax(1, i - 1), queryMax(i + 1, n)) - max(a[i], x));

	return res;
}

ll BinaryTight(int l, int r)
{
	int res = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (TotalWater(mid) >= M)
		{
			res = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	return res;
}
HaCam()
{
    fastio;
    //file("buildcol");
    cin >> n >> M;
    int l = 2e9 + 2, r = 0;
    FE(i, 1, n)
    {
        cin >> a[i];
        l = min(l, a[i]);
        r = max(r, a[i]);
    }
    preprocess();
    int res = BinaryTight(l, r);
    cout << (res >= l ? res : -1);
    return 0;
}
