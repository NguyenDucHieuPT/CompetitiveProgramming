#include<iostream>
using namespace std;

bool check( int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return ( sum == 10) ? true : false;
}
int main()
{
    int n, result = 18;
    cin >> n;
    while (n)
    {
        result ++;
        if ( check(result))
            n--;
    }
     cout << result;
     return 0;
}

