//to display the reverse of an array
#include<iostream.h>
#include<conio.h>

void swap(int &a, int &b)
 {
   int temp = a;
   a=b;
   b=temp;
 }
void revarray(int a[], int size)
{
 int j=size-1;
 for(int i=0;i<size/2;i++)
 {
  swap(a[i],a[j]);
  j--;

 }

}

void display(int *a, int size)
{
	for ( int i = 0; i < size; i++ )
	{
		cout << a[i] << "  ";
	}
}
void main()
{
	clrscr();
	int size;
	cout<<"\nEnter the size\n ";
	cin>>size;
	int*a=new int[size];
	/******************input*********************************/
	cout<<"\nEnter the elements of an array\n";
	for(int i=0;i<size;i++)
	{
		 cin>>a[i];
	}
	cout << "\nArray Elements Before Reversing\n";
	display(a,size);
	revarray(a,size);
	cout << "\nArray Elements After Reversing\n";
	display(a, size);
	getch();

}
