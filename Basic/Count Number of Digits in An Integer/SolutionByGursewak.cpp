#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long long int num;
	int i=0;
	cout<<"Enter a Number to find its digits.\n";
	cin>>num;
	while(num!=0){
		i++;
		num=num/10;
	}
	cout<<i<<" number of digits in int.\n";
	return 0;
}