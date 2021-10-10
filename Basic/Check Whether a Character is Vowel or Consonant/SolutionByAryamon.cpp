//to check whether character is a vowel or a constant
#include <conio.h>
#include <iostream.h>
#include <stdio.h>
int check_vowel(char ch)
{
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        return 1;
    } else {
        return 0;
    }
}

void main()
{
    char ch;
    clrscr();
    cout << "\nEnter the character\t ";
    cin >> ch;
    int retval = check_vowel(ch);
    if (retval == 1) {
        cout << "It is a vowel" << endl;
    } else {
        cout << "\nIt is not a vowel\n ";
    }
    getch();
}
