#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    for (int i = 0; i * A <= N; i++)
        if ( (N - A * i) % B == 0)
        {
            cout << "YES\n" << i << " " << (N - A * i) / B;
            return 0;
        }
    cout << "NO" ;
    return 0;
}
