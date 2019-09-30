#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 int mid, n, low=0, high= n-1, item;
 cout<<"Enter size of array:";
 cin>>n;
 int A[n];
 for (i=0;i<n;i++)
 { 
   cout<<"Enter array";
   cin>>A[i];
  }
 cout<<"Enter Item to be searched";
 cout<<item;
 for(i=0;i<n;i++)
 { 
   while(low<=high)
    {
       mid=(low + high)/2;
     if(item>A[mid])
       {
         low=mid+1;
        }
     else
      if(item<A[mid])
       {
         high=mid-1;
         }
     else exit(0);
      }
  }
getch();
}
