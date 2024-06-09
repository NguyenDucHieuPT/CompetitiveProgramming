#include<iostream>

using namespace std;

string str, Result[100000];
int test ;

int main()
{
    cin >> test;
    for ( int k = 0; k < test; k++)
    {
        cin >> str;
        for ( int i = 0; i < str.length(); i++)
            if ( str[i] == '0')
                str[i] = '5';
        Result[k] = str;
    }
    for ( int k = 0; k < test; k++)
        cout << Result[k] <<"\n";
    return 0;
}

