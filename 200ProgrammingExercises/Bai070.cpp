#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << m - __gcd(m,n);
    return 0;
}
