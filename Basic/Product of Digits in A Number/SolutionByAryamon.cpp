//to display the product of digits in a number
#include<iostream.h>
#include<conio.h>
int prodnum(int num)
{
	int product=1;
	for(int i=num;i!=0;i/=10)
	{
    if ( (i%10) != 0 ) {
		  product=product*(i%10);
    }
	}
	return product;

}

void main()
{
	/*****************input************************/
	int num;
	clrscr();
	cout<<"enter the number ";
	cin>>num;
	cout<<"\nproduct is\n"<<prodnum(num);
	getch();

}
