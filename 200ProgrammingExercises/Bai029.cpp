#include<iostream>
#define lli long long
using namespace std;

int main()
{
    lli N;
    cin >> N;
    cout << ( (N % 10 <= 5) ? ( N / 10) * 10 : ( N / 10 + 1) * 10);
}
