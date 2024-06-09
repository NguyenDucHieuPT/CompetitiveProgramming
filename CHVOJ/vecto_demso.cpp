#include <bits/stdc++.h>
using namespace std;
#define lli long long
string str;
void Input(string NameFile)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen((NameFile + ".Inp").c_str(), "r", stdin);
    freopen((NameFile + ".Out").c_str(), "w", stdout);
    
    std::string userInput;
    vector <int> v;
    while (std::getline(std::cin, userInput)) 
        v.push_back(stoi(userInput));
    cout << v[(int) v.size() / 2];
}
int main()
{
    string NameFile = "DEMSO";
    Input(NameFile);
    return 0;
}
