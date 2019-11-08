#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int num1=1, num2=1, num, con;
	cout<<"Enter number to find nth fibonacci number\n";
	cin>>num;
	cout<<endl<<endl;
	cout<<num1<<endl;
	cout<<num2<<endl;
	for(int i=0; i<num-2; i++){
		con=num2;
		num2=num1+num2;
		num1=con;
		cout<<num2<<endl;
	}
	cout<<"Nth Fibonacci number is : "<<num2;
	return 0;
}