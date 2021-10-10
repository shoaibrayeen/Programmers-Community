#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 400 == 0) {
        cout << "YES";
    } else if (year % 100 == 0) {
        cout << "NO";
    } else if (year % 4 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
