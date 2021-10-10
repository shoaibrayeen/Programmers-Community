// Program - Leap Year
#include <iostream>
using namespace std;

bool check_leap(int year)
{
    if (year % 400 == 0) //Condition 1
        return true;
    else if (year % 100 == 0) //Condition 2
        return false;
    else if (year % 4 == 0) //Condition 3
        return true;
    return false;
}

int main()
{
    int year;
    cin >> year;
    ;
    if (check_leap(year) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
