#include <iostream>
using namespace std;

int main()
{
    int n, k, Ai, result = 100;
    cin >> n >> k;
    while(n--)
    {
        cin >> Ai;
        if ( k % Ai == 0 && result > k / Ai)
            result = k / Ai;
    }
    cout << result;
    return 0;
}
