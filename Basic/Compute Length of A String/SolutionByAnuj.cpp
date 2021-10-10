#include <bits/stdc++.h>
using namespace std;

int lenStr(string str)
{
    int len = 0;
    int i = 0;
    while (str[i] != '\0') {
        len++;
        i++;
    }
    return len;
}

int main()
{
    string str;
    cin >> str;
    int len = lenStr(str);
    cout << len << endl;
    return 0;
}
