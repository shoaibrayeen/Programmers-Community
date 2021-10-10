/*
 Program Description - This program Reverses the given input string.
 Solution Description: taking the input Sting and calling function "StrReverse" to reverse the string .
*/

#include <iostream>
#include <string>

using namespace std;

void StrReverse(string& string1)
{
    int n = string1.length();

    for (int i = 0; i < n / 2; i++) {
        char temp = string1[i];
        string1[i] = string1[n - i - 1];
        string1[n - i - 1] = temp;
    }
}

int main()
{
    string string1;

    cout << "Enter the String to Reverse " << endl;
    cin >> string1;

    StrReverse(string1);

    cout << string1;
    return 0;
}
