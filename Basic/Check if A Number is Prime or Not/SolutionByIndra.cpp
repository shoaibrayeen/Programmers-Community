#include <iostream>

// Description:
// A positive number N is given to you and You need to check whether it's prime or not.
// Output: return 'Yes' if Prime
//                 'No' otherwise
using namespace std;

int isPrime(int n)
{

    int m = 0, flag = 0;
    m = n / 2;
    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            cout << "No" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Yes" << endl;
    return 0;
}

int main()
{
    int n;
    cout << "Enter a +ve number which u want to check: " << endl;
    cin >> n;
    isPrime(n);
    cout << endl;
    return 0;
}