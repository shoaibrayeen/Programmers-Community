/*
     Write a program to convert a binary number into a decimal number.
*/
#include <cmath>
#include <iostream>

using namespace std;

int binary_to_decimal(int n)
{
    int sum = 0, remainder;
    for (int i = 0; n > 0; i++) {
        remainder = n % 10;
        sum = sum + (int)(pow(2, i)) * remainder;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num;

    cout << "Enter a binary number(i.e 0 & 1) ";
    cin >> num;

    cout << binary_to_decimal(num);
}
