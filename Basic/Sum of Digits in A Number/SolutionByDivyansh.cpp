#include<iostream>
using namespace std;

int sumOfDigits(int N)
{
  int sum=0;
  while(N>0)
	{
	  sum = sum + (N%10);
	  N = N/10;  	
	}
	return sum;
}
int main()
{
	int N;
	cout<<"Enter a number: "<<endl;
	cin>>N;
	cout<<"Sum of digits: "<<sumOfDigits(N)<<endl; 
  return 0;
}
