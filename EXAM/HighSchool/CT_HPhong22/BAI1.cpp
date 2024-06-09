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

string s;
string Copy(int i)
{
	string res = "";
	FL(l, i, i + 5)
		res += s[l];
	return res;
}
HaCam()
{
    fastio;
    file("text");
    cin >> s;
    int res = 0;
    FL(i, 0, (int) s.size() - 4)
    	if (Copy(i) == "virus")
    	{
    		res++;
    		i += 4;
    	}
    cout << res;
    return 0;
}