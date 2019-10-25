//convert array into zig-zag fashion
#include <iostream>
using namespace std;

int main()
{
   int size,temp,arr[20];
   cout<<"Enter the size of array ";
   cin>>size;

   cout<<"Enter element of array ";
   for(int i=1;i<=size;i++)
       cin>>arr[i];

   for(int i=1;i<size;i++)
   {
       if(i%2 != 0)                          //checking for odd no position element
       {
           if(arr[i]>arr[i+1])
           {
               temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
           }
       }
       else                                         //checking for even no. position element
       {
           if(arr[i]<arr[i+1])
           {
               temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
           }
       }
   }
   cout<<"zig-zag array is : ";
   for(int i=1;i<=size;i++)
       cout<<" "<<arr[i];
   return 0;
}
