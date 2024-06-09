#include <bits/stdc++.h>
#define lli long long
using namespace std;
int cnt[5];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, arr;
    cin >> n;
    while(n--)
    {
    	cin >> arr;
    	cnt[arr % 5]++;
    }
    lli result  = (lli) cnt[0] * (cnt[0] - 1) * (cnt[0] - 2) / 6; 
    	result += (lli) cnt[1] * cnt[4] * cnt[0]; 
    	result += (lli) cnt[2] * cnt[3] * cnt[0];
    	result += (lli) cnt[1] * (cnt[1] - 1) / 2 * cnt[3];
    	result += (lli) cnt[2] * (cnt[2] - 1) / 2 * cnt[1];
    	result += (lli) cnt[4] * (cnt[4] - 1) / 2 * cnt[2];
    	result += (lli) cnt[3] * (cnt[3] - 1) / 2 * cnt[4];
    cout << result;
	return 0;
}
