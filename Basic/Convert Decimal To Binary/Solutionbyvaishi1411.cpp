// program to convert a decimal number to binary number
#include <iostream>
using namespace std;

// function to convert decimal to binary
void dec_To_Bin(int v)
{
    int binary_Num = 0, rem, p = 1;

    while (v > 0) {
        rem = v % 2;
        binary_Num += rem * p;
        p *= 10;
        v = v / 2;
    }
    cout << "Binary of given Decimal is : " << binary_Num;
}

// Driver code
int main()
{
    int shi;
    cout << "Enter a decimal number: ";
    cin >> shi;
    dec_To_Bin(shi);
    return 0;
}
