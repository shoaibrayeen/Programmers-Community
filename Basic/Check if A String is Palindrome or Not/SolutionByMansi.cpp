#include <conio.h>
#include <iostream.h>
using namespace std;

bool Palindrome(char str[])
{
    int n = 0;
    bool check = false;
    for (int i = 0; str[i] != '\0'; i++) {
        n++;
    }

    for (int i = 0; i < n / 2; i++) {
        if (str[i] == str[n - i - 1]) {
            check = true;
        } else {
            check = false;
            break;
        }
    }

    if (check == true) {
        return true;
    } else {
        return false;
    }
}

void main()
{
    clrscr();
    char str[10000];
    cin.getline(str, 10000);

    if (Palindrome(str)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    getch();
}
