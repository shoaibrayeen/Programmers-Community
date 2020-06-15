/*
Series is : 0 1 1 2 3 5 8 ....

if n=0 then it will 0th element doesn't exist

and if n=1 then it will return 0

and if n=2 then it will return 1

otherwise it will return fib(n-1) + fib(n-2)

*/


#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 1 || n == 2)
      return n - 1;

   return fibonacci(n-2) + fibonacci(n-1);
}


int main()
{
    int n;
    cout << "Enter value of n:" << endl;
    cin >> n;
    if(n <= 0)
       cout  << "\n Fibonacci element doesn't exist" ;

    else
       cout << "The Nth Fibonacci is " << fibonacci(n);
    return 0; 
}
