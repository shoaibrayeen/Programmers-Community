

#include <iostream>
using namespace std;

// Function to check whether a character is
// vowel or not

void vowelOrConsonant(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
}

int main()
{
    char c;
    cout << "Enter the character" << endl;
    cin >> c;
    vowelOrConsonant(c);
    return 0;
}
