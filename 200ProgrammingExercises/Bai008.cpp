#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    vector<int> Result;
    cin >> t;
    Result.resize(t);
    for ( int k = 0; k < t; k++)
    {
        cin >> Result[k] ;
        Result[k]= ( Result[k] % 2 == 0 ) ? 1 : 0;
    }
    for (int result : Result)
        cout << result << endl;
    return 0;
}
