#include <iostream>
using namespace std;

int main()
{
    int n, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    cin >> n;
    while (n--)
    {
        int Ai;
        cin >> Ai;
        switch (Ai)
        {
            case 1:
                s1++;
                break;
            case 2:
                s2++;
                break;
            case 3:
                s3++;
                break;
            default:
                s4 ++;
                break;
        }
    }
    if (s1 > s3)
        s1 -= s3;
    else
        s1 = 0;
    int sum = s1 + s2 * 2;
    cout << ((s1 + s2 % 2 * 2) % 4 ? s4 + s3 + s2 / 2 + (s1 + s2 % 2 * 2) / 4 + 1 : s4 + s3 + s2 / 2 + (s1 + s2 % 2 * 2) / 4);
    return 0;
}
