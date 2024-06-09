#include <bits/stdc++.h>
using namespace std;
int TtNb( string str)
{
	int res = 0;
	for ( int i = 0; i < (int) str.size(); i++)
		res += (int) str[i] - 48;
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    cout << TtNb(str);
	return 0;
}
