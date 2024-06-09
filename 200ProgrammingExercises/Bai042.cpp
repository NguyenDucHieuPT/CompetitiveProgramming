#include <iostream>
#define lli long long
using namespace std;

int main()
{
    lli n;
    cin >> n;
    cout << ( n % 2 ? -( ++n) / 2 : n / 2);
    return 0;
}
