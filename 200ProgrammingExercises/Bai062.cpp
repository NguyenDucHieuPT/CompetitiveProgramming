#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int start = a + b, result = 0;
    while (start >= c)
    {
        result += start / c;
        start = start / c + start % c;
    }
    cout << result;
    return 0;
}
