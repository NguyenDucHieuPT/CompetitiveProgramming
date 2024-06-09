#include <iostream>
#include <math.h>

int n,m;
using namespace std;

int Walk()
{
    if (n < m)
        return -1;
    return m* ceil( (float) ceil( (float) n / 2 ) / m);
}
int main()
{
        cin >> n >> m;
        cout << Walk();
    return 0;
}


