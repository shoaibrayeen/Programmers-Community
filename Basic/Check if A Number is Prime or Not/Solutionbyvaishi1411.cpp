// check if a number is prime
#include <iostream>
using namespace std;

// function check whether a number is prime or not
bool isPrime(int v)
{
    if (v <= 0)
        return false;
    else
        for (int i = 2; i < v; i++)
            if (v % i == 0)
                return false;
    return true;
}
// Driver Code
int main()
{
    int shi;
    cout << "Enter a number: ";
    cin >> shi;
    if (shi == 1) {
        cout << "\nNeither Prime Nor Non-Prime\t";
    } else {
        isPrime(shi) ? cout << "Prime Number!!" : cout << "Not A Prime Number!";
    }
    return 0;
}
