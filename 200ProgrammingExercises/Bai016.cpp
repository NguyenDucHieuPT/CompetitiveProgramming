#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> n >> a >> b ;
    int MinA, MinB, S = n * 6, MinS = 0;
    if ( a * b >= S)
    {
        cout << a*b << endl << a << " " << b;
        return 0;
    }
    if ( a < b)
        swap(a,b);
    for ( int i = b; i <= sqrt(S); i++){
        if ( MinS == 0 || MinS > i * ceil((float) S / i))
            MinA = i, MinB = ceil( S / i), MinS = MinA * MinB;
    }
    cout << MinS << endl << MinA << " " << MinB;
    return 0;
}

