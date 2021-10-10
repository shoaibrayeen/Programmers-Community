#include <cstring>
#include <iostream>
using namespace std;

// checks palindromic nature of given string in O(n) time complexity
bool isPalindrome(char string[])
{
    int l = 0; // first character of string
    int h = strlen(string) - 1; // last character of string

    // continue comparison of characters while the leftmost and rightmost characters are same
    while (h > l) {
        if (string[l++] != string[h--]) {
            // case when unequal leftmost and rightmost characters are encountered,
            // meaning string is NOT a palindrome.
            return false;
        }
    }

    return true;
}

int main()
{
    char string[100];
    cin >> string;

    if (isPalindrome(string))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
