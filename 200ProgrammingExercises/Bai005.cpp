#include<iostream>

using namespace std;

int main()
{
    int t, Result[100], n;
    cin >> t;
    for ( int k = 0; k < t; k++)
    {
        cin >> n;
        Result[k] = 2 * --n;
    }
    for (int k = 0; k < t; k++)
        cout << Result[k] << endl;
    return 0;
}
