// Iterative C++ program to count 
// number of digits in a number 
#include <iostream> 
using namespace std; 

int countDigit(long long n) 
{ 
	int count = 0; 
	while (n != 0)
  { 
		n = n / 10; 
		count++; 
	} 
	return count;
} 

// Driver code 
int main(void) 
{ 
	long long n;
	cout<<"Enter A  Number To calculate its length :="<<"  ";
	cin>>n; 
	cout << "Number of digits : "<<countDigit(n); 
	return 0; 
} 
