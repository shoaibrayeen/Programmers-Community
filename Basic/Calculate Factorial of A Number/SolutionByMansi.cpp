#include<iostream.h>
#include<conio.h>

int fact(int n)
{
	if(n>=1)
		return n*fact(n-1);         //using recursion for calculating factorial
  else
		return 1;
}

void main()
{
	int n;
	cout<<"Enter the number whose factorial you want to calculate : ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is : "<<fact(n);
	getch();
}
