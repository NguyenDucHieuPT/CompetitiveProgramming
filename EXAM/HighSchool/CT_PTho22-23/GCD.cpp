#include <bits/stdc++.h>
using namespace std;
const int MaxN = 1e6 + 1;
int a[MaxN], cnt[MaxN] = {};
int n, m = 0;
void Input(string NameFile)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen((NameFile + ".Inp").c_str(), "r", stdin);
    freopen((NameFile + ".Out").c_str(), "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	m = max(a[i], m);
    	cnt[a[i]]++;
    }
}
void ElementalSieve_Output()
{
	for (int i = m; i > 0; i--)
	{
		int res = 0;
		for (int j = i; j <= m; j += i)
			res += cnt[j];
		if (res > 1)
		{
			cout << i;
			return;
		}
	}
}
int main()
{
	string NameFile = "GCD";
	Input(NameFile);
	ElementalSieve_Output();
	return 0;
}