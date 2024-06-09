#include <iostream>

using namespace std;
int Const( int x)
{
    int result = ( x < 10 ? x % 10 : x / 10 + 8 );

    string str = to_string(x);
    int a = (int) str[0] - 48,
        b = (int) str[str.length() - 1] - 48;
    return ( b >= a && x > 9? result + 1 : result);
}
int main()
{
    int L, R;
    cin >> L >> R;
    cout << Const(R) - Const(L - 1);
    return 0;
}
