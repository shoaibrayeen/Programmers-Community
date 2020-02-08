//to show fibonacci series with the use of pointers
#include<iostream.h>
#include<conio.h>
/***************function definition with declaration(logic)*************/
int fib(int n)
{

	int first=0;
	int second=1;
	if(n==1)
	{

		return first;
	}
	else if(n==2)
	{
		return second;
	}
	else
	{
		int result;
		for(int i=3;i<=n;i++)
		{
			result=first + second;
			first=second;
			second=result;
		}
		return result;
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
	int returnVal = fib(num);
	int *ptr = &returnVal;
	cout<< "\nFibonacci Number\t:\t" << *ptr;
	getch();
}



