#include <iostream>
using namespace std;
void count(int n)
{
    int a = 0;
    if (n < 0) {
        cout << "Enter a positive number.";
    } else {
        while (n > 0) {
            if (n % 2 == 1) {
                a++;
            }
            n = n / 2;
        }
        cout << "Number of 1s in the binary number is: " << a << endl;
    }
}
int main()
{
    int b;
    cout << "Enter the number: ";
    cin >> b;
    cout << endl;
    count(b);
    return 0;
}
