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
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define HaCam int main
const int MaxN = 1e3 + 1, MaxVal = 1e7 + 11;
int Ai, p[MaxN], n;
bool prime[MaxVal];
void Sieve(int n) 
{
	memset(prime, 1, sizeof(prime));
	prime[0] = prime[1] = 0;
	FL(i, 2, (int) sqrt(n) + 1) 
		if (prime[i]) 
			for (int j = i * i; j <= n; j += i) 
				prime[j] = 0;
}
void query()
{
	int u, v;
	cin >> u >> v;
	int sum = p[v] - p[u - 1];
	if (sum < 2)
		cout << 0 << endl;
	else
		cout << prime[sum] << endl;
}
HaCam()
{
    fastio;
    file("text");
    int q;
    cin >> n >> q;
    p[0] = 0;
    FL(i, 1, n + 1)
    {
    	cin >> p[i];
    	p[i] += p[i - 1];
    }
    Sieve(MaxVal - 1);
    
    while(q--)
    	query();
    return 0;
}