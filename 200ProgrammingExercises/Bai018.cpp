#include <iostream>
using namespace std;

int main()
{
    int a, b, s;
    cin >> a >> b >> s;
    cout << (( a + b > s || (s - a - b) % 2 == 1) ? "NO" : "YES");
    return 0;
}
