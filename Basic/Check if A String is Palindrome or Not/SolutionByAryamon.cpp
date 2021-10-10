//to check if the string is palindrome or not!
#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int length(char a[])
{
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        len++;
    }
    return len;
}
int palindrome(char a[])
{
    int size = length(a);
    int j = size - 1;
    for (int i = 0; i < size / 2; i++) {
        if (a[i] != a[j]) {
            return 0; //not palindrome
        }
        j--;
    }
    return 1; //palindrome
}
void main()
{
    char a[100];
    clrscr();
    cout << "\nEnter the String\t:\t";
    gets(a);
    int retval = palindrome(a);
    if (retval == 0) {
        cout << "\nIt is not a Palindrome\n";
    } else {
        cout << "\nIt is a Palindrome\n";
    }

    getch();
}
