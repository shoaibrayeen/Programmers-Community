//including necessary library
#include <iostream>

using namespace std;

//recursive function to calculate fibonnaci series
int fib(int x) {
   if( ( x == 1 ) || ( x == 2 ) ) {
      return x-1;
   }
   else {
      //calling the fib function recursivly
      return fib(x - 1 ) + fib( x - 2 );
   }
}

//main fuction to pass the initial values
int main() {
   int x;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   
   //this will return each term of fiboonnaci series
   cout << "\tFibonacci Number\t:\t" << fib(x) << "\n";
   return 0;
}
