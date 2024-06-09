#include <iostream>
#include <algorithm>
using namespace std;

int t, n, l, r, result[1000][1000];
int main()
{
    cin >> t;
    for ( int k = 0; k < t; k++)
    {
        cin >> n;
        result[k][0] = n;
        int time = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> l >> r;
            time = max( time, l);
            if ( r < time && i != 1)
                result[k][i] = 0;
            else
                result[k][i] = time, time++;
        }
    }
    for ( int k = 0; k < t; k++)
    {
        for ( int i = 1; i <= result[k][0]; i++)
            cout << result[k][i] << " " ;
        cout << endl;
    }
    return 0;
}

