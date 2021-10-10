//to display the sum of digits of a number
#include <conio.h>
#include <iostream.h>
int sum(int n)
{
    int add = 0;
    for (int i = n; i != 0; i /= 10) {
        add = add + (i % 10);
    }
    return add;
}

void main()
{
    int num;
    clrscr();
    /******************input*********************************/
    cout << "enter the number ";
    cin >> num;
    cout << "\nSum is \n"
         << sum(num);
    getch();
}
