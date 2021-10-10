#include <cmath>
#include <conio.h>
#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
    int num;
    cout << "Enter a number to check weather it is pime or not.\n";
    cin >> num;
    if (num <= 0) {
        cout << "Please Enter Natural Numbers" << endl;
    } else if (num == 1) {
        cout << "1 is Neither Prime nor Composite\n";
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                cout << num << " is not a prime Number.";
                exit(0);
            }
        }
        cout << num << " is a prime Number." << endl;
    }
    return 0;
}
