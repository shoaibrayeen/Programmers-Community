#include <iostream>
using namespace std;

void reverse_string(string& str)
{
    int l, temp;
    l = str.length();

    for (int i = 0; i < l / 2; i++) {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
}

int main()
{
    string s;
    cout << "Enter string : ";
    cin >> s;
    reverse_string(s);
    cout << s;
    return 0;
}
