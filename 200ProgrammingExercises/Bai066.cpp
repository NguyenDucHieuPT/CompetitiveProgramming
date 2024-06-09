#include <iostream>
#include <vector>
using namespace std;
vector <int> C(9);
void Const(int x)
{
    while (x)
        C[x % 10] ++,
        x /= 10;
}
int main()
{
    int a, n;
    cin >> n >> a;
    C.assign(9,0);
    while(n--)
    {
        Const(a++);
        //a++;
    }
    for (int result : C)
        cout << result << " " ;
    return 0;
}
