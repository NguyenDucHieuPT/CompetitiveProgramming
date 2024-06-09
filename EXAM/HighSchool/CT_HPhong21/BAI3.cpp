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

map <int,int> a;

HaCam()
{
    fastio;
    file("test");
    int n, k;
    cin >> n >> k;
    int l = 0, i = 0;
    while(n--)
    {
    	i++;
    	int Ai;
    	cin >> Ai;
    	if (Ai == k)
    	{
    		if (l)
    		{
    			cout << l << " " << i ;
    			return 0;
    		}
    		l = i;
    	}
    	a[Ai] = i;
    	if (a[2 * k - Ai])
    	{
    		cout << i << " " << a[2 * k - Ai] ;
    		return 0;
    	}
    }
    cout << 0 << " " << 0 ;
    return 0;
}