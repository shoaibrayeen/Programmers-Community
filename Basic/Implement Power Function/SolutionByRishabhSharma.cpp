#include<iostream>
#include <cstdlib>

using namespace std;

float PowerFun(int base, int power)
{
	float result;

	float total=1.0;

	if(power==0)
		return 1;

	int x=abs(power);


	for(int i=0;i<x;i++)
		total=total*base;

	if(power>0)
		result=total;
	else if(power<0)
		result=1/total;

	return result;
}


int main()
{
	int b,p;
	cout<<"Enter Base "<<endl;
	cin>>b;
	cout<<"Enter Power "<<endl;
	cin>>p;

	cout<<PowerFun(b,p);

}


