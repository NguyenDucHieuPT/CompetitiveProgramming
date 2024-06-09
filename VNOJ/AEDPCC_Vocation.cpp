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
#define FT(x,a) for (auto &x: a)
#define ALL(a) a.begin(), a.end()
#define Sz(x) (int)x.size()
#define HaCam int main
const int MaxN = 1e5 + 2;
int V[3], dp[MaxN][3];
HaCam()
{
    fastio;
    //file("vocation");
    int n;
    cin >> n;
    dp[0][0] = 0;
    FE(i, 1, n)
    {
    	cin >> V[0] >> V[1] >> V[2];
    	FE(j, 0, 2)
    	{
    		FE(k, 0, 2)
    		{
    			if (k != j)
    			{
    				dp[i][j] = max(dp[i][j],dp[i - 1][k] + V[j]);
    			}
    		}
    	}
    }
    cout << max(dp[n][0], max(dp[n][1], dp[n][2]));
    return 0;
}
