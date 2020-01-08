//To apply selection sort(maximum case)
#include<iostream.h>
#include<conio.h>

int maximum(int a[], int size, int start)
{
	int pos=start;
	int max=a[start];
	for(int i=start+1;i<size;i++)
	{
		if(max<a[i])
		{
			max=a[i];
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
	int maxpos;
	for(int i=0;i<size-1;i++)
	{
		int maxpos = maximum(a,size,i);
		if(maxpos!=i)
		{
		  swap(a[i],a[maxpos]);
		}
	}
	for( int j = 0; j < size; j++ )
	{
		cout << a[j] << "\t";
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
	getch();

}
