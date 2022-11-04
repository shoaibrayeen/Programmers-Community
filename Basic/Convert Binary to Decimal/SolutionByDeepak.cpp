#include <iostream>
using namespace std;

int binaryToDecimal(int binary)
{
    int decimal = 0, weight = 1;

    while (binary != 0) {
        int rem = binary % 10;
        decimal = decimal + rem * weight;
        binary = binary / 10;
        weight = weight * 2;
    }

    return decimal;
}

int main()
{
    int binary;
    cout << "Enter binary number:" << endl;
    cin >> binary;
    cout << "Binary to Decimal is: " << binaryToDecimal(binary);

    return 0;
}