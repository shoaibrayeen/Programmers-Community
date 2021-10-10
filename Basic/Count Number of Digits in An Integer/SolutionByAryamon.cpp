//to count the no. of digits in a number
#include <conio.h>
#include <iostream.h>
int count_num(int n)
{
    if (n == 0) {
        return 1;
    }
    int count = 0;
    for (int i = n; i != 0; i /= 10) {
        count++;
    }
    return count;
}

void main()
{
    /*****************input************************/
    int num;
    clrscr();
    cout << "enter the number ";
    cin >> num;
    cout << "\nNo.of digits is\n"
         << count_num(num);
    getch();
}
