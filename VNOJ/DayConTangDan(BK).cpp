//author Hieu Soc
//school THPT Hung Hoa
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file(name)  if (fopen (name".inp", "r") ) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); } else freopen (name".inp", "w", stdin);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define HaCam int main

const int MxN = 1e6 + 2;
const int MOD = 1e9 + 7;

vector<int> a, b;
HaCam()
{
    fastio;
    //file("text");
    int n;
    cin >> n;
    a.resize(n);
    b.resize(n + 1, INT_MAX);
    FT(x, a)
        cin >> x;
    b[0] = INT_MIN;
    int result = 0;
    for (int x: a) {
        int k = lower_bound(b.begin(), b.end(), x) - b.begin();
        b[k] = x;
        result = max(result, k);
    }
    cout << result;
}


/**
(((((((((((((((((((((((((((((#%@@@@@@@@@@@@@@@@@@&#(((((((((((((((((((((((((((((
(((((((((((((((((((((((((%@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#((((((((((((((((((((((((
((((((((((((((((((((((%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#((((((((((((((((,,,,,
(((((((((((((((((((#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(((((((((/,,,,,,,,,
((((((((((((((((((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(((*,,,,,,,,,,,,,
((((((((((((((((%@@@@@@@@@@@@@@@@@@#((((((((#&@@@@@@@@@@@@@@@%,,,,,,,,,,,,,,,,,,
(((((((((((((((%@@@@@@@@@@@@@@@#(((((((((((((((((&@@@@@@@(,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((#@@@@@@@@@@@@@@#(((((((((((((((((((((&&/,,,,,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((@@@@@@@@@@@@@@((((((((((((((((((((#,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
(((((((((((((#@@@@@@@@@@@@@#((((((((((((((((/,,,,,,,,,,,,,,,*@@@,,,,,,,,@@@*,,,,
(((((((((((((%@@@@@@@@@@@@@(((((((((((((/,,,,,,,,,,,,,,,,,@@@@@@@@@,,@@@@@@@@@,,
(((((((((((((#@@@@@@@@@@@@@#((((((((,,,,,,,,**,,,,,,,,,,,,,,*@@@,,,,,,,,@@@*,,,,
((((((((((((((@@@@@@@@@@@@@@(((/,,,,,,,,,,,,,,,,,*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((#@@@@@@@@@@@@@@/,,,,,,,,,,,,,,,,,,,,,&@#*,,,,,,,,,,,,,,,,,,,,,,,,,
(((((((((((((((%@@@@@@@@@@@@@@@#,,,,,,,,,,,,,,,,*@@@@@@@@&*,,,,,,,,,,,,,,,,,,,,,
((((((((((((((((#@@@@@@@@@@@@@@@@@@&/,,,,,,*#@@@@@@@@@@@@@@@@@(,,,,,,,,,,,,,,,,,
((((((((((((((*,,,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*,,,*,,,,,,,,,,,,,
((((((((((,,,,,,,,,,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/,,,,,,,,,*,,,,,,,,,
#((((/,,,,,,,,,,,,,,,,*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%,,,,,,,,,,,,,,,,,*,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,*%@@@@@@@@@@@@@@@@@@@@@@@@@@@(,,,,,,,,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*%@@@@@@@@@@@@@@@@&(,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
**/
