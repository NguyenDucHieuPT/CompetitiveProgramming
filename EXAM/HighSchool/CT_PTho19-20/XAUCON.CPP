//author Hieu Soc
//school THPT Hung Hoa
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define HaCam int main

int cnt[260] = {}, pos[260] = {};
HaCam()
{
    fastio;
    freopen ("xaucon.inp", "r", stdin); freopen("xaucon.out", "w", stdout);
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    int MaxR = 0, pos;
    int l = 0;
    FL(i, 0, sz(s))
    {
        int t = (int)s[i];
        cnt[t]++;
        while(cnt[t] > k && l < sz(s))
        {
            cnt[(int)s[l]]--;
            l++;
        }
        if (MaxR < i - l + 1)
        {
            pos = l;
            MaxR = i - l + 1;
        }
    }
    cout << MaxR << " " << pos + 1;
    return 0;
}
