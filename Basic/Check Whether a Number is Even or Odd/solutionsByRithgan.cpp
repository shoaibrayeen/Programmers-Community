#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    if ((num & 1) == 0) {
        cout << "\nNumber is even\n";
    } else {
        cout << "\nNumber is odd\n";
    }
    return 0;
}
