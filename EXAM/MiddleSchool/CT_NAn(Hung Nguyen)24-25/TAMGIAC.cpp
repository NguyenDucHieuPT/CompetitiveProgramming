#include <bits/stdc++.h>
using namespace std;

const double dsl = 0.000000001;
bool cmp(double a, double b)
{
	return (abs(a - b) <= dsl);
}

int main()
{
    freopen("TAMGIAC.INP", "r", stdin);
    freopen("TAMGIAC.OUT", "w", stdout);
    vector <double> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    //a0 <= a1 <= a2 
    if (a[0] < dsl || a[0] + a[1] - a[2] < dsl)
    {//kiem tra so am || kiem tra co phai ba canh cua tam giac khong
    	cout << "NO";
    	return 0;
    }
   	cout << (cmp(a[0], a[1]) || cmp(a[1], a[2])? "YES" : "NO");
   	//kiem tra co 2 canh nao bang nhau khong
    return 0;
}