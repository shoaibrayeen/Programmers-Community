#include <bits/stdc++.h>
using namespace std;
string consVowel(char c)
{
    int lowercase, uppercase;
    // evaluates to 1 if variable c is lowercase
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // evaluates to 1 if variable c is uppercase
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    // evaluates to 1 if c is either lowercase or uppercase
    if (lowercase || uppercase) {
        return "Vowel";
    } else {
        return "Constant";
    }
}
int main()
{
    //enter te testcases
    int t;
    cin >> t;
    while (t--) {
        //enter the chararcter
        char ch;
        cin >> ch;
        //sends the character to the function
        string str = consVowel(ch);
        cout << str << endl;
    }
    return 0;
}