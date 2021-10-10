
#include <iostream> // Header Files
using namespace std;

int main()
{
    int bin, dec = 0;
    cin >> bin;

    int temp = bin;
    int i = 1;
    while (temp > 0) {
        int rem = temp % 10;
        dec += rem * i;
        temp = temp / 10;
        i = i * 2;
    }

    cout << dec;
}
