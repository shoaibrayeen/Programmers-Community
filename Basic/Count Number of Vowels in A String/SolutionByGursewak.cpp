#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int i = 0;
    string str;
    cout << "Enter a String to know number of vowels.\n";
    cin >> str;
    for (int j = 0; j < str.length(); j++) {
        str[j] = tolower(str[j]);
        if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
            i++;
    }
    cout << i << " number of vowels in string.\n";
    return 0;
}