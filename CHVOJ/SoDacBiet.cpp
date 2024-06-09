//author Hieu Soc
//school THPT Hung Hoa
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file(name)  if (fopen (name".inp", "r") ) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); } else freopen (name".inp", "w", stdin);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define ALL(a) a.begin(), a.end();
#define Sz(x) (int)x.size();
#define HaCam int main

const int Max = 3e6 + 11;
bool Prime[Max];
int p[Max];
void sang(int n)
{
    memset(Prime, 1, sizeof(Prime));
    Prime[0] = Prime[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (Prime[i])
            for (int j = i * i; j <= n; j += i)
                Prime[j] = 0;
}
bool CheckSP(int x)
{
    if (Prime[x] == false)
        return false;
    int TotalDigits = 0;
    while (x)
    {
        TotalDigits += x % 10;
        x /= 10;
    }
    if (TotalDigits % 5 == 0)
        return true;
    else
        return false;
}
void PrefixSum()
{
    p[0] = 0;
    FL(i, 1, Max)
        p[i] = p[i - 1] + CheckSP(i);
}
void Solve()
{
    int l, r;
    cin >> l >> r;
    cout << p[r] - p[l - 1] << endl;
}
HaCam()
{
    fastio;
    sang(Max - 1);
    PrefixSum();
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
