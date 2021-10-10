/* To check if a number is power of two or not */
#include <conio.h>
#include <iostream.h>
#include <stdio.h>
int Check_Power(int number)
{
    if (number != 0 && number != 1) {
        while (number % 2 == 0) {
            number = number / 2;
        }
    }
    return number;
}

void main()
{
    clrscr();
    int number, Quo;
    cout << "Enter a number:";
    cin >> number;
    Quo = Check_Power(number);
    if (Quo == 1) {
        cout << "Entered number is a power of two";
    } else {
        cout << "Entered number is not a power of two";
    }
    getch();
}
