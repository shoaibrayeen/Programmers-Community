#include <iostream>
using namespace std;
int decimalBinary(int num)
{
    int ctr = 0;
    if (num > 0) {
        while (num > 0) {
            if (num % 2 == 1) {
                ctr++;
            }
            num /= 2;
        }
    }
    return ctr;
}

int main()
{
    int num;
    cout << "Enter number:" << endl;
    cin >> num;
    cout << "Number of 1's in it's Binary: " << decimalBinary(num) << endl;
    return 0;
}
