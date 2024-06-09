#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string value[1000];
int Max = 0;
void FindNumber()
{
    int Const = 1;
    while (Max)
    {
        int n = Const;
        while ( n > 0)
        {
            if ( n % 2)
            {
                value[Const] = "4" + value[Const];
                n = n / 2;
            }
            else
            {
                value[Const] = "7" + value[Const];
                n =  n / 2 - 1;
            }
        }
        Const++;
        Max--;

    }
}
int main()
{
    int t;
    vector<int> Result;

    cin >> t;
    Result.resize(t);

    for ( int k = 0; k < t; k++)
    {
        cin >> Result[k];
        Max = max( Max, Result[k]);
    }

    FindNumber();
    for (int result : Result)
        cout << value[result] << endl;
    return 0;
}

