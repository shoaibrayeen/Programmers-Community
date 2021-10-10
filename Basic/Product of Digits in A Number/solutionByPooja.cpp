/*
    A Number is given and You need to find product of all digits in the number And If any digit is zero, ignore that.
*/
#include <iostream>
using namespace std;

int productOfDigits(int n)
{
    int remainder, product = 1;
    for (int i = 1; n > 0; i++) {
        remainder = n % 10;
        if (remainder != 0) //checking digit is zero or not
            product *= remainder;
        n /= 10;
    }
    return product;
}
int main()
{
    int num;
    cout << "Enter a positive integer ";
    cin >> num;
    if (num > 0)
        cout << productOfDigits(num);
    else if (num == 0)
        cout << num;
    else
        cout << "Enter a valid number";
}
