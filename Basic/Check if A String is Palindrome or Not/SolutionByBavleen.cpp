/*
 Program Description - This program checks if the string is palindrome or not.
 Solution Description: Checking the input string to be even or odd and calling "CheckForPalindrome" function accordingly.
*/

#include <iostream>
#include <string.h>
using namespace std;

void CheckForPalindrome(string string1)
{
    int start = 0;
    int end = (string1.size()) - 1;
    while (end > start) {
        if (string1[start++] != string1[end--]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    string str;
    cout << "Enter the String ?" << endl;
    cin >> str;
    CheckForPalindrome(str);
    return 0;
}
