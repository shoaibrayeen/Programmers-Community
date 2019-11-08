#include <iostream>
#include <conio.h>
using namespace std;

int getPower(int num, int pow){
	int sum=1;
	if(pow>0){
		for(int i=0; i<pow ; i++)
			sum*=num;
		return sum;
	}
	else if(pow<0) {
		for(int i=0; i>pow ; i--)
			sum*=num;
		return (sum);
	}
	else
		return 1;
		
}
int main(int argc, char const *argv[])
{
	int num, pow;
	cout<<"Enter number and its power.\n";
	cin>>num>>pow;
	if(pow<0)
		cout<<1/getPower(num, pow)<<" is answer";
	else
		cout<<getPower(num, pow)<<" is answer";
	return 0;
}