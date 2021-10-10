#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int BinToDec(int num)
{
    int rem, sum = 0, i = 0;
    while (num != 0) {
        rem = num % 10;
        sum = sum + rem * pow(2, i);
        num /= 10;
        i++;
    }
    return sum;
}

int main(int argc, char const* argv[])
{
    int num;
    cout << "Enter a binary number like MSB___LSB.\n";
    cin >> num;
    cout << BinToDec(num) << " is decimal Number.\n";
    return 0;
}