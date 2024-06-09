#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int Ht, At, Dt, Hy, Ay, Dy, h, a, d, MinResult = 1 << 30;
int main()
{
    cin >> Ht >> At >> Dt >> Hy >> Ay >> Dy >> h >> a >> d;
    if ( At > Hy + Dy || Dt > Ay)
    {

        cout << 0;
        return 0;
    }
    for ( int i = At; i <= 200; i++)
        for (int j = Dt; j <= 100; j++)
        {
            if ( i <= Dt ) continue;
            int r = ceil((double)Hy / (i - Dy));
            int k = max( ( Ay - j) * r + 1, Ht);
            MinResult = min(MinResult, ( k - Ht) * h + ( i - At) * a + (j -Dt) * d);
        }
    cout << MinResult;
    return 0;
}
