#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int MinResult = n * a;
    for ( int i = 0; i < n; i++)
        MinResult = min( MinResult, i * a + ( (n - i) % m ? (n - i + 1) / m * b : (n - i) / m * b) );
    cout << MinResult;
    return 0;
}

