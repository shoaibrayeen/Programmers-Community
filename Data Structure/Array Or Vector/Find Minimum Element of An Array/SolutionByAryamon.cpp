//To find the minimum value from all elements of an array
#include<iostream.h>
#include<conio.h>
int minimum(int a[], int size)
{
	int min=a[0];
	for(int i=1;i<size;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}

	}
	return min;
}

void main()
{
	int size;
	clrscr();
	cout<<"\nEnter the size\n ";
	cin>>size;
	int *a=new int[size];
	cout<<"\nEnter the elements of an array\t:\t ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe result is\t:\t "<<minimum(a,size);
	getch();

}
