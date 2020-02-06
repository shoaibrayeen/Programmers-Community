#include <iostream>
#include <conio.h>
using namespace std;

int getSum(long long int num){
	int sum=0;
	while(num!=0){
		sum += num%10;
		num=num/10;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	long long int num;
	cout<<"Enter number to find sum of its digits.\n";
	cin>>num;
	cout<<getSum(num)<<" is answer";
	return 0;
}