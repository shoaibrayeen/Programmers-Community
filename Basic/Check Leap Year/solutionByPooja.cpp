//leap year program
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year :";
    cin >> year;
    if (year % 100 == 0 && year % 400 == 0)
        cout << "\nleap year";
    else if (year % 100 != 0 && year % 4 == 0)
        cout << "\nleap year";
    else
        cout << "\nNot a leap year";
    return 0;
}
