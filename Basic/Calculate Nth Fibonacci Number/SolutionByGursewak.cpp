#include <iostream>

using namespace std;
int main(int argc, char const* argv[])
{
    int num1 = 0, num2 = 1, num;
    cout << "Enter number to find nth fibonacci number\n";
    cin >> num;
    if (num == 1) {
        cout << "\n1st Fibonacii Number\t:\t" << num1;
    } else if (num == 2) {
        cout << "\n2nd Fibonacii Number\t:\t" << num2;
    } else {
        for (int i = 2; i < num; i++) {
            int num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
        cout << "Nth Fibonacci number is : " << num2;
    }
    return 0;
}
