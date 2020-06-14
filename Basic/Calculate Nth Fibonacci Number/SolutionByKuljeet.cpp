#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
      return n;

   return fibonacci(n-2) + fibonacci(n-1);
}


int main()
{
    int n;
    cout << "Enter value of n:" << endl;
    cin >> n;
    cout << "The Nth Fibonacci is " << fibonacci(n);
    return 0; 
}