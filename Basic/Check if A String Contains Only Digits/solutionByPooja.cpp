/*
    A String is given. You need to check if it contains only digits.
*/
#include <iostream>
using namespace std;

bool check_for_digit(string str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 47 && str[i] <= 57) //ASCII vlaue of 0 is 47 and 9 is 57
            i++;
        else
            return 0;
    }
    return 1;
}

int main()
{
    string str;
    bool check;

    cout << "Enter a string ";
    cin >> str;

    check = check_for_digit(str);
    if (check == 1)
        cout << "YES";
    else
        cout << "NO";
}
