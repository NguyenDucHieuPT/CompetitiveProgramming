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
const int MaxN = 1e5+11, MaxVal = 1e7+11;
int a[MaxN], p[MaxN], n;
namespace sub3
{
	bool prime[MaxVal];
	void Sieve(int n) 
	{
		memset(prime, 1, sizeof(prime));
		prime[0] = prime[1] = 0;
		FL(i, 2, sqrt(n)) 
			if (prime[i]) 
				for (int j = i * i; j <= n; j += i) 
					prime[j] = 0;
	}
	bool IsPotentialSuperPrimeNumber(int x)
	{
		int y = x;
		while (x > 0)
		{
			if (!prime[x])
				return false;
			x /= 10;
		}
		FL(i, 1, 10)
			if (prime[y * 10 + i])
				return true;
		return false;
	}
	void Process(void)
	{
		Sieve(MaxVal-1);
		p[0] = 0;
		FL(i, 1, n + 1)
			p[i] = p[i - 1] + IsPotentialSuperPrimeNumber(a[i]);
	}
}
namespace sub12
{
	bool IsPrime(int x)
	{
		if (x < 2)
			return false;
		FL(i, 2, (int) sqrt(x) + 1)
			if (x % i == 0)
				return false;
		return true;
	}
	bool IsPotentialSuperPrimeNumber(int x)
	{
		
		int y = x;
		while (x > 0)
		{
			//cout << x << endl;
			if (!IsPrime(x))
				return false;
			x /= 10;
		}
		//cout << " :" << y << endl;;
		FL(i, 1, 10)
			if (IsPrime(y * 10 + i))
				return true;
		return false;
	}
	void Process(void)
	{
		p[0] = 0;
		FL(i, 1, n + 1)
			p[i] = p[i - 1] + IsPotentialSuperPrimeNumber(a[i]);
	}
}
void query()
{
	int l, r;
	cin >> l >> r;
	cout << p[r] - p[l - 1] << endl;
}
HaCam()
{
    fastio;
    file("test");
    cin >> n;
    FL(i, 1, n + 1)
    	cin >> a[i];
    if (n <= 1000)
    	sub12::Process();
    else
    	sub3::Process();
    int q;
    cin >> q;
    while (q--)
    	query();

    return 0;
}