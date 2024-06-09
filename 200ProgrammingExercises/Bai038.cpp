#include <iostream>
using namespace std;

int main()
{
    int A, N;
    cin >> N >> A;
    if ( A > N)
    {
        cout << -1;
        return 0;
    }
    cout << ( A % 2 ? A / 2 + 1 : ( N - A) / 2 + 1);
    return 0;
}
