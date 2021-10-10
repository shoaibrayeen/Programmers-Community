#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter string \n";
    cin >> str;
    int start = 0;
    int end = (str.size()) - 1;
    while (end > start) {
        if (str[start++] != str[end--]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}