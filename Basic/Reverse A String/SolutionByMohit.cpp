#include <iostream>
#include <string>
using namespace std;

void ReverseString(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    string str;

    cout << "Enter the String " << endl;
    cin >> str;
    ReverseString(str);
    cout << str;
    return 0;
}