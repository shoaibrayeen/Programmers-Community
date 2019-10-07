#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 int mid, n, low=0, high= n-1, item;
 cout<<"Enter size of array:";
 cin>>n;
 int Array[n];
 for (i=0;i<n;i++)
 { 
   cout<<"Enter array";
   cin>>Array[i];
  }
 cout<<"Enter Item to be searched";
 cin>>item;
 while(low<=high)
    {
       mid=(low + high)/2;
     if(item>Array[mid])
       {
         low=mid+1;
        }
     else if(item<Array[mid])
       {
         high=mid-1;
         }
     else cout<<item<<" location is "<<mid+1<<"\n"; 
      }
 if(low > high)
 {  
  cout<<item<<"Not found in array';
 }
getch();
}
