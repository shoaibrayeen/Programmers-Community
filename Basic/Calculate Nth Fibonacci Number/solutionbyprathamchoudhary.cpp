//including necessary library
#include <iostream>

using namespace std;

//recursive function to calculate fibonnacu series
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      //calling the fib function recursivly
      return(fib(x-1)+fib(x-2));
   }
}

//main fuction to pass the initial values
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   
   //this will return each term of fiboonnaci series
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}