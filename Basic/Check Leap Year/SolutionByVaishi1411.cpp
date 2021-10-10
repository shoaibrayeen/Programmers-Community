#include <iostream>
using namespace std;

int main()
{
    int shi;
    cout << "Enter a year\t:\t";
    cin >> shi;
    if (shi % 400 == 0)
        cout << "Leap Year!\n";
    else if (shi % 100 == 0)
        cout << "Not a Leap Year!\n";
    else if (shi % 4 == 0)
        cout << "Leap Year!\n";
    else
        cout << "Not a Leap Year!\n";
    return 0;
}
