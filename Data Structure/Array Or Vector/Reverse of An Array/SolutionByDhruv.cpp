#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void reverse(int Array[],int n);
void main()
{
  clrscr();
  int n;
  cout<<"Enter number of elements maximum 6:";
  cin>>n;
  int Array[6];
  for(int i=0;i<n;i++)
  {
    cout<<"\nEnter Element:";
    cin>>Array[i];
   }
  reverse(Array,n);
  getch();
  }

// Function to reverse Array
void reverse(int Array[], int n)
{
  cout<<"Reversed Array:";
  for(int i=n-1;i>=0;i--)
   {
     cout<<Array[i];
     }
}
