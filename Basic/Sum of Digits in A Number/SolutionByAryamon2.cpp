//to display the sum of digits of a number(using recursion)
#include <conio.h>
#include <iostream.h>
int sumNumber(int n)
{
    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumNumber(n / 10);
}

void main()
{
    int num;
    clrscr();
    /******************input*********************************/
    cout << "\nEnter Number\t:\t";
    cin >> num;
    cout << "\nSum\t\t:\t" << sumNumber(num);
    getch();
}
