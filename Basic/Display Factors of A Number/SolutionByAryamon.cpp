//to display the factors of a number
#include<iostream.h>
#include<conio.h>

void factor(int num)
{
	  for(int i=1;i<=num;i++)
	  {
	    if(num%i==0)
	    {
		cout << i << " ";
	    }
	  }

}

void main()
{
	int n;
	clrscr();
	cout<<"\nEnter the number\n ";
	cin>>n;
	cout<<"\nFactors of the number are\n ";
	factor(n);
	getch();

}
