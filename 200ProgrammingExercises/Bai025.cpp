#include <iostream>
using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;
    Y--;
    cout << ( ((X - Y ) % 2 == 0 && X >= Y) ? "YES" : "No");
    return 0;
}
