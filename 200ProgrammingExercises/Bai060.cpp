#include <iostream>

using namespace std;

bool check( string x)
{
    for ( int i = 0; i < x.length(); i++)
        if (x[i] != x[x.length() - i - 1])
            return false;
    return true;
}
int main()
{
    string n;
    cin >> n;
    cout << (check(n) ? "YES" : "NO");
    return 0;
}
