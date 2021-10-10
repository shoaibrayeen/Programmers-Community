#include <iostream> // Header Files
using namespace std;

int decimalToBinary(int decimal)
{
    int binary = 0, weight = 1;
    while (decimal != 0) {
        int rem = decimal % 2;
        decimal = decimal / 2;
        binary = binary + rem * weight;
        weight = weight * 10;
    }

    return binary;
}

int main()
{
    int decimal;
    cout << "Enter Decimal number:" << endl;
    cin >> decimal;
    cout << "Decimal to Binary is: " << decimalToBinary(decimal);

    return 0;
}
