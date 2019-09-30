#include<iostream.h>
#include<conio.h>
void main()
{
 int mid, n, low=0, high= n-1, item;
 cout<<"Enter size of array:";
 cin>>n;
 cout<<"Enter Item to be searched";
 cout<<item;
 for(int i=0;i<n;i++)
 { 
   while(low<=high)
    {
       mid=(low + high)/2;
     if(A[low]<item)
       {
         low=low+1;
        }
     else
      if(A[high]>item)
       {
         high=high-1;
         }
     else exit(0);
      }
  }
getch();
}
