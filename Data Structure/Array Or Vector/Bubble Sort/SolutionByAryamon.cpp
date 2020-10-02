//To apply bubble sort
#include<iostream.h>
#include<conio.h>
void swap(int &a, int&b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void display(int a[], int size)
{
	for(int j=0;j<size;j++)
	{
	  cout<<a[j]<<" ";
	}
}
void Bubble(int a[], int size)
{
  for(int i=0;i<size;i++)
  {
	for(int j=0;j<size-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
		  swap(a[j],a[j+1]);
		}
	}
	display(a,size);
	cout<<endl;
  }
}

void main()
{
	int size;
	clrscr();
	cout<<"\nEnter the size\n ";
	cin>>size;
	int *a=new int[size];
	cout<<"\nEnter the elements of the array\t:\t ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	Bubble(a,size);
	getch();
}

