/* Program to calculate product of elements in an array*/
#include<iostream.h>
#include<conio.h>
void product(int a[], int n);                         //Declaring Prototype of the function product
void main()
{
 int a[10], n;
 cout<<"Enter no. of elements:";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter element in array:";
  cin>>a[i];
  }
 product(a,n);                                       //Calling function product
 getch();
}

void product(int a[], int n)                         //Defining function product
{
  long int product = 1;
  for(int i=0;i<n;i++)
  {
   product *= a[i];
   }
  cout<<"Product of elements are:"<<product;
}
