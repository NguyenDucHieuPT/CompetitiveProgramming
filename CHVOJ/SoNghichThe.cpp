#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define file(name) freopen(name".INP","r",stdin); freopen(name".OUT","w",stdout);
#define HaCam int main

const int N = 5e5 + 2;
int a[N], f[N], n;
namespace v1
{
	void process(void)
	{
		long long res = 0;
		for ( int i = 1; i <= n; i++)
		{
			for(int j = a[i] + 1; j <= N; j += j & -j)
				res += f[j];
			for (int j = a[i]; j; j -= j & -j)
				f[j]++;
		}

		cout << res << endl;
	}
}
long long t[N];
vector<int> b;
namespace v2
{

	void updates(int x, int p)
	{
		while(x <= n)
		{
			t[x]++;
			x += x & -x;
		}
	}

	int gett(int x)
	{
		long long res = 0;
		while(x > 0)
		{
			res += t[x];
			x -= x & -x;
		}
		return res;
	}

	void process(void)
	{
		long long res = 0;
		for (int i = 1; i <= n; i++)
		{
			b.push_back(a[i]);
		}
		sort(b.begin(), b.end());
		b.resize(unique(b.begin(), b.end()) - b.begin());
		for (int i = 1; i <= n; i++)
			a[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;

		for (int i = n; i > 0; i--)
		{
			res += gett(a[i] - 1);
			updates(a[i], 1);
		}
		cout << res << endl;
	}
}
HaCam()
{
	fastio;
	file("invers");
	cin >> n;
	for ( int i = 1; i <= n; i++)
		cin >> a[i];
	//v1::process();
	v2::process();
	return 0;
}
