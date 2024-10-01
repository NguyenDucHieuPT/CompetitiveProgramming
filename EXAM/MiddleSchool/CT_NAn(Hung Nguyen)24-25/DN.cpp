#include <bits/stdc++.h>
using namespace std;

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

const int MaxN = 101;
int a[MaxN];

int main()
{
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    	cin >> a[i];
    for(int i = 0; i < n; i++)
    	cout << ReversingNumbers(a[i]) << " ";
    return 0;
}