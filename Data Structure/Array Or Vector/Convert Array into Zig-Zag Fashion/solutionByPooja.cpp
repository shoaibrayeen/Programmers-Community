/*
   convert array into zig-zag fashion
*/
#include <iostream>
using namespace std;

void zig_zag(int [],int);

int main()
{
   int size;
   cout<<"Enter the size of array ";
   cin>>size;

   int * arr = new int[size];
   cout<<"Enter element of array ";
   for(int i=1;i<=size;i++)
       cin>>arr[i];

   zig_zag(arr,size);                     //zig_zag function to arrange the element of array in zig-zag fashion

   cout<<"zig-zag array is : ";          
   for(int i=1;i<=size;i++)                    
       cout<<" "<<arr[i];
   return 0;
}

void zig_zag(int arr[],int size)
{  int temp;
   for(int i=1;i<size;i++)
   {
       if(i%2 != 0)                           //checking odd position element
       {
           if(arr[i]>arr[i+1])
           {
               temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
           }
       }
       else                                  //checking even position element
       {
           if(arr[i]<arr[i+1])
           {
               temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
           }
       }
   }
}
