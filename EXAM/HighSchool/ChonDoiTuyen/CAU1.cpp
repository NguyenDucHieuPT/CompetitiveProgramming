#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define BIT(x, i) ((x) & (1 << (i)))
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file(name)  if (fopen (name".inp", "r") ) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); } else freopen (name".inp", "w", stdin);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define lt(k) fixed << setprecision(k) 
#define HaCam int main(void)
//end #define

template <class x, class y>bool max_t(x &a, y &b){return a < b ? a = b, 0 : 1;}
template <class x, class y> bool min_t(x &a, y &b){return a > b ? a = b, 0 : 1;}
//end template

using ll = long long;
using ld = long double;
using st = string;
using pii = pair<int, int>;
using vi = vector<int>;
//end using

const int INF = 1e9 + 1;
const ll INFF = 1e18 + 1;
const int MaxN = 1e6 + 1;
const int MaN = 1e5 + 1;
const int MOD = 1e9 + 7;
//endl const

//author Hieu Soc
//school THPT Hung Hoa

int a, b, c;
namespace Sub1
{
    void process(void)
    {
        int res = 0,
            MinABC = min(a, min(b, c));
        FE(i, 0, MinABC)
        {
            int SpecialFlower = i,
                RedFlower = (a - i) / 3,
                BlueFlower = (b - i) / 3,
                YellowFlower = (c - i) / 3;
            int TotalBouquets = SpecialFlower + RedFlower + BlueFlower + YellowFlower;
            res = max(res, TotalBouquets);
        }
        cout << res << endl;
    }
}
namespace Sub2
{
    void process(void)
    {
        int res = (a / 3) + (b / 3) + (c / 3);
        int am = a % 3, bm = b % 3, cm = c % 3;
        if (am + bm + cm == 4 && am * bm * cm == 0)
        {
            if ((a && !am) || (b && !bm) || (c && !cm))
                res++;
        }
        else
            res += min(am, min(bm, cm));
        cout << res << endl;
    }

}
HaCam
{
    fastio;
    file("CAU1");
    cin >> a >> b >> c;
    if (max(a, max(b, c)) < 500)
        Sub1::process();
    else
        Sub2::process();
    return 0;
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