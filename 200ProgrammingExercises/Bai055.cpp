#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector <int> n(3);
    cin >> n[0] >> n[1] >> n[2];
    sort(n.begin(), n.end());
    if ( n[2] - n[1] == n[1] - n[0])
        cout << n[2] + n[1] - n[0];
    else if ( n[2] - n[1] > n[1] - n[0])
        cout << n[1] + n[1] - n[0];
    else
        cout << n[0] + n[2] - n[1];
    return 0;
}
