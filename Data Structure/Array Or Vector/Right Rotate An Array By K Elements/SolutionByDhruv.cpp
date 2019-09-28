#include<iostream.h>
#include<conio.h>
void right_rotation(int a[], int n);
void main()
{
  int a[1000], n;
  cout<<"Enter n";            //Number of elements in array a[]
  cin>>n;
  for(int i=0;i<n;i++)
  {
   cout<<"Create an array";
   cin>>a[i];
   }
  right_rotation(a,n);
  getch();
}

void right_rotation(int a[], int n)
{ 
  int avail[1000], k;
  cout<<"\nEnter how many times you want to right rotate the array";
  cin>>k;
  for(int i=n-1;i>0;i++)       //Run the loop from last index of array a[]
  { 
    if(i+k>=n)
     { 
       avail[i+k-n]=a[i];
        }
     else
      {
        avail[i+k]=a[i];       //Save the element in avail[] array
        }
   }
    for(i=0;i<n;i++)
     {
       cout<<"Rotated array is:"<<avail[i]<<" ";
       }
}



   



  
