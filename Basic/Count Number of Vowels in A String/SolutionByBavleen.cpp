#include <iostream>
#include <string>
using namespace std;

int Vowels(string s)
{
    int c = 0;
    for (int i = 0; i < s[i] != '\0'; i++) 
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') 
        {
            c++;
        }
    }
    return c;
}

int main()
{
    string s;
    cout << "String:" << endl;
    cin >> s;
    cout << "Number of vowels: " << Vowels(s);
}
