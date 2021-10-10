//to show tribonacci series as recursive function
#include <conio.h>
#include <iostream.h>
int trib(int n)
{
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 0;
    } else if (n == 3) {
        return 1;
    }
    return trib(n - 3) + trib(n - 2) + trib(n - 1);
}
void main()
{
    int num;
    clrscr();
    cout << "\nEnter the number\n ";
    cin >> num;
    cout << "\nThe element of tribonacci series is \t:\t " << trib(num);
    getch();
}
