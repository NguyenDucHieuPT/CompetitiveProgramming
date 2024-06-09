#include <iostream>
#include <algorithm>
#define lli long long
using namespace std;

int main()
{
    lli A, B, X, Y, Z;
    cin >> A >> B >> X >> Y >> Z;
    cout << max( 0ll, 2 * X + Y - A) + max( 0ll, 3 * Z + Y - B);
    return 0;
}
