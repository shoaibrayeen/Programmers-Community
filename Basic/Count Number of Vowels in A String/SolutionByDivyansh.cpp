#include <iostream>
using namespace std;

int NumberOfVowels(string s)
{
    static int count;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter string: " << endl;
    cin >> s;
    cout << "Number of vowels :" << NumberOfVowels(s) << endl;
    return 0;
}
