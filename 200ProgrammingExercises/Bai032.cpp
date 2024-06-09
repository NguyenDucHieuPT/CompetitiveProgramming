#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    for ( int i = 0; i <= C / A; i++)
        if ( ( C - A * i) % B == 0)
        {
            cout << "YES";
            return 0;
        }
    cout << "NO";
    return 0;
}
