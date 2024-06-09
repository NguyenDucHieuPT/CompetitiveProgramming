#include <bits/stdc++.h>
#define lli long long
using namespace std;
int Prime(lli n)
{
	lli i = 2;
	int result = 0;
	while ( i <= sqrt(n))
	{
		bool ok = false;
		while (n % i == 0)
			n /= i,
			ok = true;
		if (ok)
			result++;
		i++;
	}
	if (n > 1)
		result++;
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin >> n;
    cout << Prime(n);
	return 0;
}
