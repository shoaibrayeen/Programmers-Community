/*
     Write a function to count number of smaller elements on right of each element in an array.
*/

#include<iostream>
using namespace std;

void smallestAtRight(int arr[],int size)
{
    int count;
    int a[size];

    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=i+1;j<size;j++)
            if(arr[j]<=arr[i])
                count++;
        a[i]=count;
    }
     for(int i=0;i<size;i++)
                    cout<<a[i]<<" ";

}

int main()
{
     int size;
     cout<<"Enter the size of array ";
     cin>>size;

     int *arr=new int[size];
     if(size>0)
     {
          cout<<"Enter element of array ";
          for(int i=0;i<size;i++)
                    cin>>arr[i];

          smallestAtRight(arr,size);

     }

}
