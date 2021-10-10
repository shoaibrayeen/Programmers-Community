//to show fibonacci series
#include <conio.h>
#include <iostream.h>
/***************function definition with declaration(logic)*************/
int fib(int n)
{
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int first = 0;
        int second = 1;
        int result;
        for (int i = 3; i <= n; i++) {
            result = first + second;
            first = second;
            second = result;
        }
        return result;
    }
}
void main()
{
    /*******input*********/
    int num;
    clrscr();
    cout << "enter the num " << endl;
    cin >> num;
    /********output*********/
    cout << "\nFibonacci Number\t:\t" << fib(num);
    getch();
}
