//to display the sum of all elements of an array
#include<iostream.h>
#include<conio.h>
int sum_arr(int a[], int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	return sum;


}

void main()
{
	clrscr();
	/********************input******************************/
	int size;
	cout<<"\nEnter the size \n";
	cin>>size;
	int*a=new int [size];
	cout<<"enter the elements of the array ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nSum is \n"<<sum_arr(a,size);
	getch();

}
