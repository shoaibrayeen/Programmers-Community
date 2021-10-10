#include <conio.h>
#include <iostream.h>
void main()
{
    clrscr();
    int yr;
    cout << "Enter year :";
    cin >> yr;
    /* Checking if year is leap year or not*/
    if ((yr % 4 == 0) && (yr % 100 != 0)) {
        cout << "This is a Leap Year";
    } else if ((yr % 100 == 0) && (yr % 400 == 0)) {
        cout << "This is a Leap Year";
    } else if (yr % 400 == 0) {
        cout << "This is a Leap Year";
    } else {
        cout << "This is not a Leap Year";
    }
    getch();
}
