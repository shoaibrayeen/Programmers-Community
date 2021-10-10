#include <bits/stdc++.h>
using namespace std;
bool isDigit(string str)
{
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        bool b = isDigit(str);
        if (b) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }
    return 0;
}
