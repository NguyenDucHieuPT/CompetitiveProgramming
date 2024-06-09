#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sumstring( string a, string b)
{
    string result = "";
    int div = 0;
    for ( int i = 1; i <= max(a.length(), b.length()) + 1; i++)
    {
        int Ai, Bi;
        Ai = (a.length() < i ? 0 : (int)a[a.length() - i] - 48);
        Bi = (b.length() < i ? 0 : (int)b[b.length() - i] - 48);

        result = to_string( (Ai + Bi + div) % 10 ) + result;
        div = (Ai + Bi) / 10;
    }
    if (result[0] == '0')
        result = result.substr(1);
    return result;
}
string Max( string x)
{
    for ( int i = 0; i < x.length(); i++)
        if (x[i] == '5')
            x[i] = '6';
    return x;
}
string Min( string x)
{
    for ( int i = 0; i < x.length(); i++)
        if (x[i] == '6')
            x[i] = '5';
    return x;
}
int main()
{
    string a, b ;

    cin >> a >> b;
    cout << sumstring( Min(a) , Min(b) ) << " " << sumstring( Max(a) , Max(b) );
    return 0;
}
