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

bool comp(int a, int b)
{
	int SZ = 0;
	SZ += (a >= 10 ? 2 : 1);
	SZ += (b >= 10 ? 2 : 1);
	if (SZ % 2 == 0)
		return a > b;
	else if (a < 10)
		return (a * 10 + a > b);
	else
		return (a > b * 10 + b);
}
HaCam()
{
    fastio;
    file("text");
    int n;
    cin >> n;
    vector <int> a(n);
    FT(x, a)
    	cin >> x;
    sort(a.begin(), a.end(), comp);
    FT(x, a)
    	cout << x;
    return 0;
}