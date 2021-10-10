#include <iostream>
using namespace std;

/*
Program Description: An Year as input is given and You need to check that it's leap year or not.
Output: 'Yes' if Leap Year 'No' Otherwise
Solution Description: I check for three condititons in an order to check whether an yer is a leap year or not and in case all the conitions prove to be false then the year will not be a leap year.
*/

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
