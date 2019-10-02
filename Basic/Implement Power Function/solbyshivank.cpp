#include<iostream>
using namespace std;
float power(float m,int n)
	{
		if(n==0)
			return 1.0;
		if(n<0)
			return ((1.0/m)*power(m,n+1));
		else
			return (m*power(m,n-1));
	}
int main(int arg,char *args[])
{
		cout<<"\n Enter the base: ";
		float base;
		cin>>base;
		cout<<"\nEnter the no. for power: ";
		int po;
		cin>>po;
		cout<<"\nOutput: "<<power(base,po);
		return 0;
}