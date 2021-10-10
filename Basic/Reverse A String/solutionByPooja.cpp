/*
    A String is given. You need to reverse it.
*/
#include <iostream>
#include <string>
using namespace std;

string reverse_string(string s)
{
    char temp;
    for (int i = 0, j = s.length() - 1; i <= j; i++, j--) {

        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}
int main()
{
    string str;
    cout << "Enter a string ";
    cin >> str;

    cout << "\nReverse of input string is " << reverse_string(str);
}
