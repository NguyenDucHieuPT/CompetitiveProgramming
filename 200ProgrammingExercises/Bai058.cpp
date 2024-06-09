#include <iostream>
#include <math.h>
using namespace std;
double length( int x1, int x2, int y1, int y2)
{
    return sqrt( pow ( x1 - x2, 2) + pow( y1 - y2, 2) );
}
double Acreage( int x1, int x2, int x3, int y1, int y2, int y3)
{
    double a, b, c;
    a = length(x1, x2, y1, y2);
    b = length(x1, x3, y1, y3);
    c = length(x3, x2, y3, y2);
    double p = (a + b + c) / 2;
    return sqrt( p * ( p - a) * ( p - b) * ( p - c) );
}
int main()
{
    int xA, xB, xC, xD, yA, yB, yC, yD;
    cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
    double Sabc, Sabd, Sacd, Sbcd;
    Sabc = Acreage(xA, xB, xC, yA, yB, yC);
    Sabd = Acreage(xA, xB, xD, yA, yB, yD);
    Sacd = Acreage(xA, xC, xD, yA, yC, yD);
    Sbcd = Acreage(xB, xC, xD, yB, yC, yD);
    cout << (abs(Sabc - Sabd - Sacd - Sbcd) <= 0.00001 ? 1 : 0);
    return 0;
}
