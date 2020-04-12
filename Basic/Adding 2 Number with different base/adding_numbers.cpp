#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int numToDecimal(int num, int base){
	int i=0, sum=0, rem;
	while(num > 0) {
		rem=num % 10;
		sum = sum + rem*pow(base, i);
		num = num/10;
		i++;
	}
	return sum;
}

int numToOtherBase(int num, int base){
	int i=1, rem, sum=0;
	while (num > 0 ){
		rem = num % base;
		sum = sum + (rem*i);
		i*=10;
		num=num/base;
	}
	return sum;
}

int main(){
	int num1, num2, base1, base2, add, d;
	cout<< "Enter first number and its base";
	cin>>num1;
	cin>>base1;
	cout<< "Enter second number and its base";
	cin>>num2;
	cin>>base2;
	
	add = numToDecimal(num1, base1) + numToDecimal(num2, base2) ;
	cout<< add;
	cout<< endl;

	cout<< "Enter the base to get the result in";
	cin>>d;

	cout<< numToOtherBase(add, d);

	getch();
	return 0;
}