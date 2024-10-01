#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*
	1   2 3   4 5 6    7  8  9  10   11 12 13 14 15   16 17
    1 | 2 4 | 6 9 12 | 16 20 24 28 | 30 35 40 45 50 | 54 60

    */
    freopen("CHIAHET.INP", "r", stdin);
    freopen("CHIAHET.OUT", "w", stdout);

    long long n, m = 0, i = 0;
    cin >> n;
    while(true)
    {
    	i++;
    	m = i * (m / i + i);
    	long long k = i * (i + 1) / 2;
    	if ( k >= n)
    	{
    		cout << m - i * (k - n);
    		return 0;
    	}
    	
    	
    }
    return 0;
}