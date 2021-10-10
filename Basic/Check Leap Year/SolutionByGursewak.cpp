#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int year;
    cout << "Enter year to check whether leap year or not.\n";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "Yes, this is leap year.\n";
    } else {
        cout << "No, this is not leap year.\n";
    }
    return 0;
}