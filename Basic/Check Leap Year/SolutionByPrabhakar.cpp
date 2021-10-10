#include <iostream>

using namespace std;
void isLeap(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Yes";
            } else {
                cout << "No";
            }
        } else {
            cout << "Yes";
        }
    } else {
        cout << "No";
    }
}

int main()
{
    int year;
    cin >> year;
    isLeap(year);
    return 0;
}
