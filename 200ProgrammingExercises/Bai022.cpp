#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, result = 0;
    vector<int> w;

    cin >> n >> k;
    w.resize(n);

    for ( int i = 0; i < n; i++)
    {
        cin >> w[i];
       result += w[i] / k + (w[i] % k ? 1 : 0);
    }
        cout << result / 2 + (result % 2 ? 1 : 0);
    return 0;
}


