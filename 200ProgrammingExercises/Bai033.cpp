#include <iostream>
#include <algorithm>
#define lli long long
using namespace std;

int main()
{
    lli L, R;
    cin >> L >> R;
    L = max(0LL, L - 1);
    //cout << R * ( R + 1) / 2  << endl <<  L * ( L + 1) / 2  << endl << 13 * ( R / 13) * ( R / 13 + 1) / 2 << endl << 13 * ( L / 13) * ( L / 13 + 1) / 2;
    cout << R * ( R + 1) / 2  -  L * ( L + 1) / 2  - 13 *( ( R / 13) * ( R / 13 + 1) / 2 - ( L / 13) * ( L / 13 + 1) / 2 );
    return 0;
}
