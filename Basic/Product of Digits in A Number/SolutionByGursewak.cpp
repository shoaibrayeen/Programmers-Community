#include <iostream>
#include <conio.h>
using namespace std;

int getPro(int num){
	int pro=1;
	while(num!=0){
		if(num%10==0){}
		else
			pro *= num%10;
		num=num/10;
	}
	return pro;
}
int main(int argc, char const *argv[])
{
	int num;
	cout<<"Enter number to find product of its digits.\n";
	cin>>num;
	cout<<getPro(num)<<" is answer";
	return 0;
}