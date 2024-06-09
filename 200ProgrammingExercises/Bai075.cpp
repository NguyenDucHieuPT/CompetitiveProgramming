#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> Result1, Result2;

void Test()
{
    int a, b;
    cin >> a >> b;
    if (b == a)
    {
        Result1.push_back(a * 10);
        Result2.push_back(b * 10 + 1);
    }
    else if (b - a == 1)
    {
        Result1.push_back(a * 10 + 9);
        Result2.push_back(b * 10);
    }
    else if ( a == 9 && b == 1)
    {
        Result1.push_back(99);
        Result2.push_back(100);
    }
    else
    {
        Result1.push_back(-1);
        Result2.push_back(-1);
    }
}
int main()
{
    int t;


    cin >> t;
    while(t--)
        Test();

    for (int i = 0; i < Result1.size(); i++)
        if (Result1[i] == -1)
            cout << -1 << endl;
        else
            cout << Result1[i] << " " << Result2[i] << endl;
    return 0;
}

