#include <iostream>
using namespace std;

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    else
        return false;
}

int main()
{
    char ch;
    cout << "\n Enter Character:" << endl;
    cin >> ch;
    if (isVowel(ch))
        cout << "Vowel" << endl;
    else
        cout << "Consonant";

    return 0;
}