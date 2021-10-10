//to find the length of string
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
void main()
{
    char a[100];
    clrscr();
    cout << "\nEnter the String\t:\t";
    gets(a);
    cout << "\nLength of String\t:\t" << length(a);
    getch();
}
