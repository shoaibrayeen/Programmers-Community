#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a year ";
    int y;
    cin >> y;

    if (y % 400 == 0) {
        cout << "\nLeap Year\n";
    } else if (y % 100 == 0) {
        cout << "\nNot a Leap Year\n";
    } else if (y % 4 == 0) {
        cout << "\nLeap Year\n";
    } else {
        cout << "\nNot a Leap Year\n";
    }
    return 0;
}
