#include <iostream> // Header Files
using namespace std;

int getCount(int n)
{
    int count = 0;
    if (n == 0) {
        return 1;
    }

    while (n > 0) {
        n = n / 10;
        count++;
    }

    return count;
}

int main() // Driver Code
{
    int n;
    cout << "Enter Value:" << endl;
    cin >> n;
    cout << "Number of digits in an integer is: " << getCount(n);

    return 0;
}
