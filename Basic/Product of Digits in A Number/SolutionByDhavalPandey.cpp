#include <iostream>
using namespace std;
// Function to get product of digits //
int product(int shi)
{
    int res = 1, rem = 0;
    while (shi != 0) {
        rem = shi % 10;

        if (rem != 0) {

            res = res * rem;
            shi = shi / 10;
        } else if (rem == 0) {
            shi = shi / 10;
        }
    }
    return res;
}

// Driver program
int main()
{
    int shi;
    cout << "Enter a number: ";
    cin >> shi;
    if (shi == 0) {
        cout << "Product of it's digits is: 0 ";
    }

    else {
        cout << "Product of it's digits is: " << product(shi);
    }

    return 0;
}
