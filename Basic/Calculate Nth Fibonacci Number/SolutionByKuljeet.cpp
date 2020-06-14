#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n <= 2)
        return n-1;
    else
        return fibonacci(n-2) + fibonacci(n-1);
}


int main()
{
    int n = 0;
    cout << "Enter value of n:" << endl;
    cin >> n;
    if(fibonacci(n) == -1)
        cout << "Fibonacci Series at 0th element doesn't exist" << endl;
    else
        cout << "The Nth Fibonacci is " << fibonacci(n);
    return 0; 
}
