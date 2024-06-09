#include <iostream>
using namespace std;

bool check( int x)
{
    string str = to_string(x);
    return ( str.find("8") == -1) ? true : false;
}
int main()
{
    int n, Const = 1;
    cin >> n;
    n++;
    while ( check( n))
        n++,
        Const++;
    cout << Const;
}
