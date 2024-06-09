#include<iostream>

using namespace std;

int main()
{
    int t, Result[500], N, X;
    cin >> t;
    for ( int k = 0; k < t; k++)
    {
        cin >> N >> X;
        N--;
        Result[k] = N * 10 - X * N;
    }
    for (int k = 0; k < t; k++)
        cout << Result[k] << endl;
    return 0;
}
