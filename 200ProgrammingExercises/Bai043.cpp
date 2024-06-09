#include <iostream>
using namespace std;

int main()
{
    int x, n, m, Final, Min = -1;
    cin >> n >> m ;
    for ( int i = 1; i <= n; i++)
    {
        cin >> x;
        if( Min <= x / m + ( x % m >0))
            Min =x / m + ( x % m >0), Final = i;
    }
    cout << Final;
    return 0;
}
