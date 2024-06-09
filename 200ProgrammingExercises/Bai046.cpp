#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int a = a1 + a2 + a3, b = b1 + b2 + b3;
    cout << ( ( a / 5 + (a % 5 > 0)) + ( b / 10 + (b % 10 > 0)) <= n ? "YES" : "NO");
    return 0;
}
