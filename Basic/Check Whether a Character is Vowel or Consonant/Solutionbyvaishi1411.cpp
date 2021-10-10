#include <iostream>
using namespace std;
int main()
{
    char shi;
    cout << "Enter the character: ";
    cin >> shi;
    if (shi == 'a' || shi == 'A' || shi == 'e' || shi == 'E' || shi == 'i' || shi == 'I' || shi == 'o' || shi == 'O' || shi == 'u' || shi == 'U')
        cout << "You entered a vowel! " << shi;
    else
        cout << "You entered a consonant! " << shi;
    return 0;
}
