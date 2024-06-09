#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;
    int time = h * 60 + m - 45;
    time = (time < 0 ? 1440 + time : time);
    cout << time / 60 << " " << time % 60;
    return 0;
}
