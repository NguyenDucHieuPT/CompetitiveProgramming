#include <iostream>
#include <vector>
using namespace std;
int l, r, a, b;
int ConstMultiples()
{
    int result = 0;
    result = ( (int) l / a ) - ( (int) (r - 1) / a )
           + ( (int) l / b ) - ( (int) (r - 1) / b )
           - ( (int) l / a / b ) - ( (int) (r - 1) / a / b);

    return result;
}
int main()
{
    int t;
    vector<int> Result;

    cin >> t;
    Result.resize(t);

    for ( int k = 0; k < t; k++)
    {
        cin >> r >> l >> a >> b;
        Result[k] = ConstMultiples();
    }
    for (int result : Result)
        cout << result << endl;
    return 0;
}
