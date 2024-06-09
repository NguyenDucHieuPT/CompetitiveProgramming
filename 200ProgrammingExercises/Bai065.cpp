#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double Sht = (a + b ) * sqrt( 2 * (pow(c,4) + 2 * pow(c,2) * pow(b - a, 2)) - 2 * pow(c,4) - pow(b - a,4)) / 4 / (b - a),
           h = Sht * 2 / (a + b),
           r = h / 4,
           Sr = r * r * 3.14;
    cout << fixed << setprecision(2) << Sht -  9 Sr;
    return 0;
}
