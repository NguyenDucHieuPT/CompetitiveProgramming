#include <bits/stdc++.h>
using namespace std;

long long a, b;
const int Max = 1e7 + 1;
int MaxAB;
bool CheckPrime[Max] = {};
void BuildAPrimeCheckingArray()
{
	for(int i = 2; i <= MaxAB; i++)
		if(!CheckPrime[i])
			for(int j = i * 2; j <= MaxAB; j += i)
				CheckPrime[j] = 1;
}

int ReversingNumbers(int number)
{
	int reverse = 0;
	while(number)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
	}
	return reverse;
}

int main()
{
    freopen("SOCPDEP.INP", "r", stdin);
    freopen("SOCPDEP.OUT", "w", stdout);
    long long a, b;
    cin >> a >> b;
    MaxAB = sqrt(b);
    BuildAPrimeCheckingArray();
    /* a <= x ^ 2 <= b
		<=> sqrt(a) <= x <= sqrt(b)
		tim cac so x vua la so nguyen to vua la so dao nguoc
		trong khoang sqrt(a) - > sqrt(b)
	*/
	int Count = 0;
	for(int i = sqrt(a - 1) + 1; i <= sqrt(b); i++)
	{
		if (!CheckPrime[i] && i == ReversingNumbers(i))
			Count++;
	}
	cout << Count; 
    return 0;
}