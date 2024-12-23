#include <iostream>
using namespace std;

const int MaxN = 1e5 + 1;
int pos[MaxN] = {};
int smallest_distance(int l, int r)
{
    int left = l, right = r;
    int min_max_distance = r;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        int max_distance = max(abs(pos[mid] - pos[l]), abs(pos[r] - pos[mid]));
        if (max_distance < min_max_distance)
            min_max_distance = max_distance;

        if (pos[mid] < (pos[l] + pos[r]) / 2)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return min_max_distance;
}
int main()
{
    freopen("TRONGCAY.INP","r", stdin);
    freopen("TRONGCAY.OUT","w", stdout);
    int n, k, pointer = 0;
    cin >> n >> k;
    int MinValue = n;
    for(int i = 1; i <= n; i++)
    {
        char Ai;
        cin >> Ai;
        if (Ai == '0')
        {
            pointer++;
            pos[pointer] = i;
            if (pointer > k)
                MinValue = min(MinValue, smallest_distance(pointer - k, pointer));
        }
    }
    cout << MinValue;
    return 0;
}
