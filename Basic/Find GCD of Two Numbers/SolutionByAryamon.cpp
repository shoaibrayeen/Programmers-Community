//To calculate the GCD of a given no.
#include<iostream.h>
#include<conio.h>
int GCD(int num1, int num2)
{
	int hcf=1;
	for(int i=1;i<=num1&& i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf=i;
		}
	}
	 return hcf;

}
void main()
{
	/*********************input*******************************/
	int n1,n2;
	clrscr();
	cout<<"\nEnter the 1st and 2nd numbers\n ";
	cin>>n1>>n2;
	cout<<"\nThe HCF is\n "<<GCD(n1,n2);
	getch();

}
