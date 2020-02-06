#include<iostream>
using namespace std;

int countSetBits(int n)
{
	//Simple Solution
	//Approach:- Performing ANd of each bit with 1 one by 1 if the result is true then increment count
	int count =0;
	while(n)
	{
		if((n&1) == 1)	count++;             //can also be written as count += n & 1;
		n=n>>1;
	}
	return count;
}
int countSetBitsBrian(int n)
{
	//Efficient Approach:- Brian Kernighan's Approach i.e. until n is not 0 perform n = n &n-1 and increment count
	int count=0;
	while(n)
	{
		count++;
		n=n&(n-1);		//n&=n-1 we can write this as well
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	cout<<countSetBits(n)<<endl;
	cout<<countSetBitsBrian(n);
	return 0;
}
