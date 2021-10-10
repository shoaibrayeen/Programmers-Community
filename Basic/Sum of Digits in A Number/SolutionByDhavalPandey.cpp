#include <conio.h>
#include <iostream.h>
void Sum_Of_Digits(int number);
void main()
{
    clrscr();
    int number;
    cout << "Enter the number:";
    cin >> number;
    Sum_Of_Digits(number);
    getch();
}

/*Function to calculate Sum of digits*/
void Sum_Of_Digits(int number)
{
    int sum = 0;
    while (number != 0) {
        sum = sum + number % 10;
        number = number / 10;
    }
    cout << "\nThe sum of the digits:" << sum;
}
