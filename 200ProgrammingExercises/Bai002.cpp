#include<iostream>

using namespace std;
int test, Result[500], n;

int main()
{
    cin >> test;
    for ( int k = 0; k < test; k++)
    {
        cin >> n;
        Result[k] = 7 - n;
    }
    for ( int k = 0; k < test; k++)
        cout << Result[k] << endl;
}

