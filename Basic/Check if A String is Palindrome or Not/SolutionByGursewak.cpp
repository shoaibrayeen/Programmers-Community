#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    string str;
    cout << "Enter a Palindrome string.\n";
    cin >> str;
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) {
            cout << "String is not Palindrome.";
            exit(0);
        }
    }
    cout << "String is Palindrome.";
    return 0;
}
