
#include <bits/stdc++.h>
using namespace std;

void leapY(int yr)
{
    if (yr % 400 == 0) {
        cout << yr << "is a leap year.";
    } else if (yr % 100 == 0) {
        cout << yr << "is not a leap year!";
    } else if (yr % 4 == 0) {
        cout << yr << "is a leap year.";
    } else {
        cout << yr << "is not a leap year!";
    }
}

int main()
{

    int yr;
    cout << "Enter a year :";
    cin >> yr;
    leapY(yr);

    return 0;
}
