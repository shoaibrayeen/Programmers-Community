#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
  int n;
  cout<<"Enter number of elements":
  cin>>n
  int Array[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter Element";
    cin>>Array[i];
   }
  reverse(Array,n);
  getch();
  }

// Function to reverse Array
void reverse(int Array[n], int n)
{
  cout<<"Reversed Array:";
  for(int i=n-1;i>0;i--)
   { 
     cout<<Array[i];
     }
}
