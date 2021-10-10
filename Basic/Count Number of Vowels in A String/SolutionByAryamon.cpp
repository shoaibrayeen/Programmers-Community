//to count the no.of vowels in a string
#include <conio.h>
#include <iostream.h>
#include <stdio.h>

double count_vowel(char a[])
{
    int count = 0;
    for (int i = 0; i < a[i] != '\0'; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
            count++;
        }
    }
    return count;
}
void main()
{
    char a[100];
    clrscr();
    cout << "\nEnter the string\t ";
    gets(a);
    cout << "\nno.of vowels in a string is\n"
         << count_vowel(a);
    getch();
}
