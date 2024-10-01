#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define BIT(x, i) ((x) & (1 << (i)))
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file(name)  if (fopen (name".inp", "r") ) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); } else freopen (name".inp", "w", stdin);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define HaCam int main(void)

using ll = long long;
using ld = long double;
using st = string;
using pii = pair<int, int>;
using vi = vector<int>;

//author Hieu Soc
//school THPT Hung Hoa

const int INF = 1e9 + 1;
const ll INFF = 1e18 + 1;
const int MaxN = 1e6 + 1;
const int MOD = 1e9 + 7;

ll a, b;
const int MaxAB = 1e7 + 1;
int CountPrimeDivisors[MaxAB] = {};
bool CheckPrime[MaxAB] = {};
bool CheckSpecialNumbers[MaxAB] = {};

void BuildADivisorsCountingArray()
{
	for(int i = 2; i <= MaxAB; i++)
		if(!CheckPrime[i])
			for(int j = i; j <= MaxAB; j += i)
			{
				CheckPrime[j] = 1;
				CountPrimeDivisors[j]++;
			}
}

void SaveSpecialNumbers(int x)
{
	//cout << x << endl;
	if(x < MaxAB && CountPrimeDivisors[x] >= 3)
		CheckSpecialNumbers[x] = 1;
}
int ReversingNumber(int x)
{
	int res = 0;
	while(x)
	{
		res = res * 10 + (x % 10);
		x /= 10;
	}
	return res;
}
void BuildASpecialNumberCheckingArray()
{
	int k = 10;
	FE(i, 1, 1000)
	{
		if(i == k)
			k *= 10;
		int ReverseNumber = ReversingNumber(i);
		SaveSpecialNumbers(i * k + ReverseNumber);
		FE(j, 0, 9)
			SaveSpecialNumbers(i * k * 10 + j * k + ReverseNumber);
	}

}
namespace solve
{

	void process(void)
	{
		cin >> a >> b;
		ll SumOfSpecialNumbers = 0;
		FE(i, a, b)
			if(CheckSpecialNumbers[i])
				SumOfSpecialNumbers += (ll) i;
		cout << SumOfSpecialNumbers << endl;
	}
}

HaCam
{
    fastio;
    BuildADivisorsCountingArray();
    BuildASpecialNumberCheckingArray();
    solve::process();
    
    return 0;
}


/**
(((((((((((((((((((((((((((((#%@@@@@@@@@@@@@@@@@@&#(((((((((((((((((((((((((((((
(((((((((((((((((((((((((%@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#((((((((((((((((((((((((
((((((((((((((((((((((%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#((((((((((((((((,,,,,
(((((((((((((((((((#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(((((((((/,,,,,,,,,
((((((((((((((((((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(((*,,,,,,,,,,,,,
((((((((((((((((%@@@@@@@@@@@@@@@@@@#((((((((#&@@@@@@@@@@@@@@@%,,,,,,,,,,,,,,,,,,
(((((((((((((((%@@@@@@@@@@@@@@@#(((((((((((((((((&@@@@@@@(,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((#@@@@@@@@@@@@@@#(((((((((((((((((((((&&/,,,,,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((@@@@@@@@@@@@@@((((((((((((((((((((#,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
(((((((((((((#@@@@@@@@@@@@@#((((((((((((((((/,,,,,,,,,,,,,,,*@@@,,,,,,,,@@@*,,,,
(((((((((((((%@@@@@@@@@@@@@(((((((((((((/,,,,,,,,,,,,,,,,,@@@@@@@@@,,@@@@@@@@@,,
(((((((((((((#@@@@@@@@@@@@@#((((((((,,,,,,,,**,,,,,,,,,,,,,,*@@@,,,,,,,,@@@*,,,,
((((((((((((((@@@@@@@@@@@@@@(((/,,,,,,,,,,,,,,,,,*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((#@@@@@@@@@@@@@@/,,,,,,,,,,,,,,,,,,,,,&@#*,,,,,,,,,,,,,,,,,,,,,,,,,
(((((((((((((((%@@@@@@@@@@@@@@@#,,,,,,,,,,,,,,,,*@@@@@@@@&*,,,,,,,,,,,,,,,,,,,,,
((((((((((((((((#@@@@@@@@@@@@@@@@@@&/,,,,,,*#@@@@@@@@@@@@@@@@@(,,,,,,,,,,,,,,,,,
((((((((((((((*,,,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*,,,*,,,,,,,,,,,,,
((((((((((,,,,,,,,,,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/,,,,,,,,,*,,,,,,,,,
#((((/,,,,,,,,,,,,,,,,*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%,,,,,,,,,,,,,,,,,*,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,*%@@@@@@@@@@@@@@@@@@@@@@@@@@@(,,,,,,,,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*%@@@@@@@@@@@@@@@@&(,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
**/
