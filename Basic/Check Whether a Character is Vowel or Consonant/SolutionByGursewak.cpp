#include <conio.h>
#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
    char ch;
    cout << "Enter a character.\n";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "Character is a Vowel";
    } else {
        cout << "Character is not a Vowel";
    }
    return 0;
}