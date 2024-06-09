#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a, b;

void Problem1()
{
    int x;
    cin >> n >> x;
    a.resize(n);
    for (int &it: a)
        cin >> it;
    int left = 0, right = n - 1;
    while(left < right)
    {
        int sum = a[left] + a[right];
        if (sum == x)
        {
            cout << left + 1 << " " << right + 1 ;
            return ;
        }
        if (sum < x)
            left++;
        else
            right--;
    }
    cout << "No solution";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    Problem1();

    return 0;
}
