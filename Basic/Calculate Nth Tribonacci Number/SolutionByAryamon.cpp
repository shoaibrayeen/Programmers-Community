//to show tribonacci series
#include<iostream.h>
#include<conio.h>
/***************function definition with declaration(logic)*************/
int trib(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 0;
	}
	else if(n==3)
	{
		return 1;
	}
	else
	{
		int first=0;
		int second=0;
		int third=1;
		int result;
		for(int i=4;i<=n;i++)
		{
			result=first+second+third;
			first=second;
			second=third;
			third=result;
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
	 cout<<trib(num);
	 getch();
}
