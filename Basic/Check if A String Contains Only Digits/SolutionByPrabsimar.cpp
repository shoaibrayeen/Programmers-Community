
//string consist only digits or not?

#include <iostream> 
#include <string>
using namespace std;

int main()
{
string s;
cout << "Enter String:" << endl;
cin >> s;

int k = 0;
for (int i = 0; i < s.length(); i++) 
{
    if (isdigit(s[i]))
        k++;
}

if (k == s.length())
    cout << "\n String consist only digits" << endl;

else
    cout << "\n String doesn't consist only digits" << endl;

return 0;
}
