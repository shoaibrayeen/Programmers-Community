#include<iostream>
using namespace std;

int main()
{
    int fact = 1, n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
      fact *= i;
    }
    cout << "Factorial of given number\t:\t" << fact;
    return 0;
}

