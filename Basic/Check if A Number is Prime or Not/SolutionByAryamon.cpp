//to check whether the no.is prime or not
#include<iostream.h>
#include<conio.h>

int prime(int num)
{
	if(num <= 0)
	{
		return 0;     // not prime
	}
	else if(num == 1)
	{
		return 1;  //neither prime nor composite
	}
	else
	{
		int count = 0;
		for(int i=2;i<=num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}
		if ( count == 1 )
		{
			return 2;       //for prime nos.
		}
		return 0;  //not prime
	}
}
void main()
{
	int n,i;
	clrscr();
	cout<<"\nEnter the number\n ";
	cin>>n;
	int retval = prime(n);
	if (retval==0)
	{
		cout<<"\nIt is not a prime no.\n ";
	}
       else if(retval==1)
       {
		cout<<"It is neither prime nor composite\n ";
       }
       else if(retval==2)
       {
		cout<<"\nIt is a prime no.\n ";
       }
       getch();

}
