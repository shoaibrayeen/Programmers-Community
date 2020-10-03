//To identify whether the year is a leap year or not
#include<iostream.h>
#include<conio.h>
int leap_year(int num)
{
	if(num%400==0)
	{
	     return 1;
	}
	else if(num%100==0)
	{
	     return 0;
	}
	else if(num%4==0)
	{
	     return 1;
	}
	else
	{
	     return 0;
	}

}
void main()
{
	/**************input*****************/
	int num;
	clrscr();
	cout<<"enter the number ";
	cin>>num;
	int retval = leap_year(num); /*Calling Function*/
	if(retval == 0)
	{
	   cout<<"\nIt is not a leap year\n";
	}
	else
	{
	   cout<<"\nIt is a leap year\n ";
	}
	getch();

}

