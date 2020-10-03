/*
Author : Seema Kumari Patel
Problem : Program to check if a given year is leap year or not
Input : Year number (Integer)
Output : Conclusion if the given year is leap year or not.
*/

#include <bits/stdc++.h>
using namespace std;

void leapYear(int year)
{

    if (year % 400 == 0 && year % 4 == 0)
        cout << year << "is a leap year.";

    else if (year % 100 == 0)
        cout << year << "is not a leap year!!";
}

// Driver code
int main()
{

    int yr;
    cout << "Enter a year :";
    cin >> yr;
    leapYear(yr);

    return 0;
}
