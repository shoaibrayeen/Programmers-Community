//To identify whether the number is even or odd
#include<iostream.h>
#include<conio.h>
int odd_even(int num)
{
	if( (num & 1) ==0)
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
	/*********************input*******************************/
	int num;
	clrscr();
	cout<<"enter the number ";
	cin>>num;
	int retval = odd_even(num);
	if(retval == 0)
	{
	   cout<<"\nIt is an odd no.\n";
	}
	else
	{
	   cout<<"\nIt is an even no.\n ";
	}
	getch();

}
