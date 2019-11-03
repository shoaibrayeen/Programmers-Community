/*
    An Array is given and You need to compute product of all the elements.
*/
#include<iostream>
using namespace std;

int main()
{
    int size,product=1;
    cout<<"Enter the size of array ";
    cin>>size;

    if(size>0)
    {
          int arr[size];
          for(int i=0;i<size;i++)
          {
                 cout<<"Enter "<<i<<" element ";
                 cin>>arr[i];
          }
          for(int i=0;i<size;i++)
                 product*=arr[i];
                 
          cout<<product;

    }
    else if(size==0)
         cout<<"0";
    else
         cout<<"enter valid size ";
}
