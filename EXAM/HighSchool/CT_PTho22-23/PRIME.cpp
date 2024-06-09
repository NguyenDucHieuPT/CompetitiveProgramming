#include <bits/stdc++.h>
using namespace std;
int n, N = 0, nb[11], bk[11] = {}, res = -1;
void Input(string NameFile)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen((NameFile + ".Inp").c_str(), "r", stdin);
    freopen((NameFile + ".Out").c_str(), "w", stdout);
    cin >> n;
}
void SeparateTheDigits()
{
	while(n)
		nb[N++] = n % 10,
		n /= 10;
}
bool CheckPrime(int x)
{
	if (x < 2)
		return false;
	for ( int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
void PrintPrime()
{
	int tmp = 0;
	for ( int i = 0; i < N; i++)
	if (!bk[i])
	{
		tmp = tmp * 10 + nb[i];
		if (CheckPrime(tmp))
			res = max(res, tmp);
	}
}
void BackTrack(int k)
{
	for (int i = 0; i < 2; i++)
	{
		bk[k] = i;
		if (k == N)
			PrintPrime();
		else
			BackTrack(k + 1);
	}
}
void Output()
{
	cout << res;
}
int main()
{
	string NameFile = "PRIME";
	Input(NameFile);
	SeparateTheDigits();
	reverse(nb, nb + N);
	BackTrack(0);
	Output();
	return 0;
}