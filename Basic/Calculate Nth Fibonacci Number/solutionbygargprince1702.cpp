
// A Program to calculate Nth Number in Fibonacci Series.
#include<iostream>
using namespace std;
int Fibonacci(int n) 
{
    int fib[n];
	fib[0]=0, fib[1]=1;
	for(int i=2;i<n;i++)
	{
	        fib[i] = fib[i-1] + fib[i-2];
	}
 	cout << "\nFibonacci Number\t:\t" << fib[n-1]<<" ";
}
int main()
{
	cout<<"Enter a positive number\t:\t";
	int n;
	cin>>n;
	if( n > 0 ) {
	    Fibonacci(n);
	}
	else {
	    cout<<"\nEnter Positive Inputs Only"<<endl;
	}
}
//This code is contributed by gargprince1702
