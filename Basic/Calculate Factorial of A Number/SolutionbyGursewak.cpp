#include <iostream>
using namespace std;

int main()
{
    int num, sum = 1;
    cout << "Enter a number to find factorial.\n";
    cin >> num;
    if (num < 0) {
        cout << "Please enter positive number as u entered -ve number.\n";
    } else {
        for (int i = 1; i <= num; i++) {
            sum *= i;
        }
        cout << "Factorial of the number is: " << sum;
    }
}
