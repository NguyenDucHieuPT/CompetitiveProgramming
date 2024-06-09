#include <iostream>
#include <algorithm>
using namespace std;

int MinArr = 10e9 - 1, Ai , Total = 0;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> Ai;
        Total += Ai;
        if (Ai % 2)
            MinArr = min(MinArr, Ai);
    }
    if (Total % 2)
        cout << Total - MinArr;
    else
        cout << Total;
    return 0;
}
