#include <iostream>
#include <vector>
using namespace std;

int arr[200], n, x[200], k;
int Time()
{
    int t = 0;
    for (int i = 0; i <= n; i++)
        arr[i] = 0;
    int Const = 0, time = 0;
    while (Const < n)
    {
        time++;
        for (int i = 0; i < k; i++)
        {
            if ( x[i] + t > n) continue;
            if ( arr[ x[i] + t] == 0)
            {
                Const++;
                arr[ x[i] + t] = 1;
            }
            if ( x[i] - t <= 0 ) continue;
            if ( arr[ x[i] - t] == 0)
            {
                Const++;
                arr[ x[i] - t] = 1;
            }
        }
        t++;
    }
    return time;
}
int main()
{
    int t;
    vector<int> Result;

    cin >> t;
    Result.resize(t);

    for ( int i = 0; i < t; i++)
    {
        cin >> n >> k;
        for ( int j = 0; j < k; j++)
            cin >> x[j];
        Result[i] = Time();
    }
    for (int result : Result)
        cout << result << endl;
    return 0;
}
