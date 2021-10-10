#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <string.h>
void main()
{
    clrscr();
    char str[100], temp;
    int i = 0, j;
    cout << "Enter the String : ";
    gets(str);
    j = strlen(str) - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout << "Reverse of the String = " << str;
    getch();
}
