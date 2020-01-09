//To apply selection sort(minimum case)
#include<iostream.h>
#include<conio.h>

int minimum(int a[], int size, int start)
{
	int pos=start;
	int min=a[start];
	for(int i=start;i<size;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			pos=i;
		}
	}
	return pos;
}

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void selection(int a[], int size)
{
	int minpos;
	for(int i=0;i<size-1;i++)
	{
		int minpos = minimum(a,size,i);
		if(minpos!=i)
		{
		  swap(a[i],a[minpos]);
		}
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
	selection(a,size);
	for( int j = 0; j < size; j++ )
	{
		cout << a[j] << "\t";
	}
	getch();

}
