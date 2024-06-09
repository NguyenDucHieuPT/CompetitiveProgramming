#include <iostream>
#include <math.h>
using namespace std;

bool Check( int time)
{
    time = abs(time);
    time = (time / 60) * 100 + (time % 60);
    while (time)
        if (time % 10 == 7)
            return true;
        else
            time /= 10;

    return false;
}
int main()
{
    int mm, hh, x;

    cin >> x >> mm >> hh;
    int timeO = mm * 60 + hh, time = timeO;

    while ( Check(time) == false|| (timeO - time) % x != 0)
            time--;
    cout << (timeO - time) / x;
}
