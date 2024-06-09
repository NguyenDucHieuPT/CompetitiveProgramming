#include <iostream>
#include <math.h>
using namespace std;

bool Check( int x)
{
    int tmp = ( int) sqrt(x) + 1;
    return ( tmp * ( tmp ++) / 2 == x) ? true : false;
}
int main()
{
    int t, Result[100];
    cin >> t;
    for ( int k = 0; k < t; k++)
    {
        cin >> Result[k] ;
    }
    for (int k = 0; k < t; k++)
        cout << Check( Result[k]) << endl;
    return 0;
}

