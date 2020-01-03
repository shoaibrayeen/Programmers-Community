//to implement the power function
#include<iostream.h>
#include<conio.h>
#include<math.h>
double power(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
	  return x;
	}
	double product=1;
	for(int i=0;i<abs(n);i++)
	{

		product=product*x;
	}
	if ( n < 0 )
	{
		return 1/product;
	}
	return product;
}
void main()
{
	/*****************input************************/
	int pow,base;
	clrscr();
	cout<<"\nEnter the base\t:\t";
	cin>>base;
	cout<<"\nEnter the power\t:\t";
	cin>>pow;
	cout<<"\nThe Result\t:\t"<<power(base,pow);
	getch();

}
