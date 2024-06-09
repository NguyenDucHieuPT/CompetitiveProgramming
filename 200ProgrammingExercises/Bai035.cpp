#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int N, P, L, R;
    cin >> N >> P >> L >> R;
    if ( L == 1 && R == N)
        cout << 0;
    else if ( L == 1)
        cout << abs( P - R) + 1;
    else if ( R == N)
        cout << abs ( P - L) + 1;
    else
        cout << R - L + min( abs( P - L), abs( P - R)) + 2;
    return 0;
}

