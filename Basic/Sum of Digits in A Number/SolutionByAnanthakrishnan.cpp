#include <iostream> // Header Files
using namespace std;

int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main() // Driver Code
{
    int n;
    cout << "Enter Value:" << endl;
    cin >> n;
    cout << "Sum of digits in a number is: " << getSum(n);

    return 0;
}
