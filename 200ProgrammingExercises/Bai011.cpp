#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t, q, l, gt = 0, gq = 0;
void ConstGoal()
{
    int result = 0;
    gt = 0;
    gq = 0;
    while ( l > 1)
    {
        if ( t % l == 0)
            gt++, t--;
        else if ( q % l == 0)
            gq++, q--;
        else
            l--;
    }
}
int main()
{
    int tc;
    vector<int> Result1, Result2;

    cin >> tc;
    Result1.resize(tc);
    Result2.resize(tc);
    for ( int k = 0; k < tc; k++)
    {
        cin >> t >> q >> l;
        ConstGoal();
        Result1[k] = gt;
        Result2[k] = gq;
    }
    for ( int k = 0; k < tc; k++)
        cout << Result1[k] << " " << Result2[k] << endl;
    return 0;
}


