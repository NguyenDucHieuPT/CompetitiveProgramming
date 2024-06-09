#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool check[100001];
vector <int> snt;

void build( int Max)
{
    for ( int i = 2; i <= Max; i++)
        check[i] = true;
    for ( int i = 2; i <= sqrt(Max); i++)
        if (check[i] == true)
            for ( int j = 2 * i; j <= Max; j += i)
                check[j] = false;
    for ( int i = 2; i <= Max; i++)
        if (check[i])
            snt.push_back(i);
}
int main()
{
    int n, Const = 0;
    cin >> n;

    if ( n < 13)
    {
        cout << -1;
        return 0;
    }

    build( sqrt(n));

    for ( int x = 0; x <= snt.size() ; x++)
        for ( int y = x + 1; y <= snt.size(); y++)
            if (snt[x] * snt[x] + snt[y] * snt[y] <= n)
                cout << snt[x] << " " << snt[y] << " " << snt[x] * snt[x] + snt[y] * snt[y] << endl;
            else
                break;

    return 0;
}
