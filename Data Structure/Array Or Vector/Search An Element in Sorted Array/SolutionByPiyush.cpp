#include <iostream>
using namespace std;

string check_palindrome(char name[20])
{
    int length_of_string = 0, palndrome_checker = 0, length;

    length_of_string = strlen(name); //getting the length of the string

    length = length_of_string;

    if (length % 2 != 0)
        length = length - 1; //it is to aoid the addition of 1 in the actual length due to the presence of the null character.
    for (int i = 0; i < length / 2; i++, length--) {
        if (name[i] == name[length])
            palndrome_checker = 0;
        else {
            palndrome_checker = 1;
            break;
        }
    }

    if (palndrome_checker == 0) {
        return "YES";
    }

    else {
        return "NO";
    }
}
int main()
{
    char name[20];

    cout << "\nEnter the name:";
    cin >> name;
    cout << check_palindrome(name);
    return 0;
}
