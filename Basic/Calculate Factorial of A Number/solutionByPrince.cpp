#include<iostream>
using namespace std;
int fact(int x)
{
	if(x==1 or x==0)
		return 1;
	else
		return x*fact(x-1);

}
int main()
{
	int x;
	cout<<"Enter a number which you want to get Factorial :"<<" ";
	cin>>x;
    	int factorial =	fact(x);	
	cout<<"The Factorial of  " <<x<<" is\t:\t "<<" "<<factorial;
	return 0;
}
