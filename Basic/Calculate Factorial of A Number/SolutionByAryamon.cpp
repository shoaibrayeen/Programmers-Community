//to display the factorial of a number
#include<iostream.h>
#include<conio.h>
/************function as logic(definition with declaration***********/
double factorial(int N)
{
	double fact=1;
	for(int i=N;i>1;i--)
	{
		 fact*=i;
	}
	return fact;
}

void main()
{
	/*******************input******************/
	int num;
	clrscr();
	cout<<"enter the number "<<endl;
	cin>>num;
	/******************output******************/
	cout<< "\nFactorial\t:\t" << factorial(num);
	getch();
}
