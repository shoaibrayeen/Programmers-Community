#include <bits/stdc++.h>
using namespace std;

string strrev(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string s;
    cin >> s; //Enter string
    cout << strrev(s); //After reversal
    return 0;
}
