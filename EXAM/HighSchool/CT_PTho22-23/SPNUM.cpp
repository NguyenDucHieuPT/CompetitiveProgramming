#include <bits/stdc++.h>
using namespace std;
int n, k;
const int MaxN = 1e6 + 1;
bool CheckPrime[MaxN];
void Input(string NameFile)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen((NameFile + ".Inp").c_str(), "r", stdin);
    freopen((NameFile + ".Out").c_str(), "w", stdout);
    cin >> n >> k;
}

bool CheckBit(int x)
{
	int CountBits = 0;
	while (CountBits <= k && x)
	{
		CountBits += x % 2;
		x /= 2;
	}
	return (CountBits == k && x == 0 ? true : false);
}
void ElementalSieve()
{
	for ( int i = 2; i <= n; i++)
		CheckPrime[i] = true;

	for ( int i = 2; i <= n; i++)
		if (CheckPrime[i] == true)
			for ( int j = 2 * i; j <= n; j += i)
				CheckPrime[j] = false;
}	
void Output()
{
	ElementalSieve();
	int res = 0;
	for (int i = 2; i <= n; i++)
		if (CheckPrime[i] && CheckBit(i))
			res++;
	cout << res;
}
int main()
{
	string NameFile = "SPNUM";
	Input(NameFile);
	Output();
	return 0;
}