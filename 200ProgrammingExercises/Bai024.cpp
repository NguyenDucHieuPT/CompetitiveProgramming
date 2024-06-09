#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int Const = 0;
    while ( A <= B)
        A *= 3, B *= 2, Const++;
    cout << Const;
    return 0;
}
