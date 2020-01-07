#include <iostream>
#include <conio.h>
using namespace std;

int main()
{	
	int year;
	cout<<"Enter year to check\n";
	cin>>year;
	if((year%4==0 && year%100!=0) || year%400==0){
		cout<<"leap year.\n";
	}
	else{
		cout<<" Not leap year.\n";
	}
	return 0;
}
