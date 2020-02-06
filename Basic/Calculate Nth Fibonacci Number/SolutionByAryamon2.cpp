//to show fibonacci series(recursive function)
#include<iostream.h>
#include<conio.h>
/***************function definition with declaration(logic)*************/
int fib(int n)
{
	if(n==1)
	{

		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return fib(n-1) + fib(n-2);   //recursive function
	}
 }
void main()
{
	/*******input*********/
	int num;
	clrscr();
	cout<<"enter the num "<<endl;
	cin>>num;
	/********output*********/

	cout<< "\nFibonacci Number\t:\t" << fib(num);
	getch();
}



