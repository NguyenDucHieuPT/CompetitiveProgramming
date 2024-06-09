#include<iostream>

using namespace std;
string Odd_or_Even(int x)
{
    int Const = 0;
    while (x)
    {
        if ( x % 2 == 1)
            Const++;
        x /= 2;
    }
    return Const % 2 == 0 ? "even" : "odd" ;
}
int main()
{
    int t;
    long long Result[500];
    cin >> t;
    for ( int k = 0; k < t; k++)
        cin >> Result[k] ;

    for (int k = 0; k < t; k++)
        cout << Odd_or_Even( Result[k]) << endl;

    return 0;
}
