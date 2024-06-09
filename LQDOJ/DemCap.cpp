#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
void CountPairs()
{
    int k;
    cin >> n >> k;
    a.resize(n);
    for (int &it: a)
        cin >> it;

    int left = 0, right = n - 1, l = 1, r = 1;
    long long result = 0;
    int K_Half = k / 2;
    while(left < right)
    {
        while(left + 1 < n && a[left] == a[left + 1] && left < right)
        {
            l++;
            left++;
        }

        while(right - 1 >= 0 && a[right] == a[right - 1] && right > left)
        {
            r++;
            right--;
        }


        int sum = a[left] + a[right];
        if (k % 2 == 0)
        {
            if (a[left] == K_Half)
                {
                 cout << result + (long long) l * (l - 1) / 2;
                 return;
                }
            if (a[right] == K_Half)
            {
                cout << result + (long long) r * (r - 1) / 2;
                return;
            }
        }
        if (sum == k)
        {
            result += (long long) l * r;
            left++;
            right--;
            l = r = 1;
        }
        else if (sum < k)
        {
            left++;
            l = 1;
        }
        else
        {
            right--;
            r = 1;
        }
    }
    cout << result ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    CountPairs();
    cout << endl;
    return 0;
}
