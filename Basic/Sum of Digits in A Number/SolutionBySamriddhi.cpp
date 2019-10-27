#include<bits/stdc++.h>
using namespace std;

int add(int n)
{
	int sum = 0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
		
return sum;
}

int main()
{
	int num;
	cin>>num;         //Enter number
	cout<<add(num);   //Sum of Digits
	return 0;
}
