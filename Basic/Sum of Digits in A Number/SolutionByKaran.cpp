#include <iostream>
using namespace std;
void calculate_sum(long a)
{
    long sum = 0;
    while (a > 0) {
        sum = sum + (a % 10);
        a = a / 10;
    }
    cout << "Sum of digits is: " << sum << endl;
}
int main()
{
    long b;
    cout << "Enter the number: ";
    cin >> b;
    cout << endl;
    calculate_sum(b);
    return 0;
}
