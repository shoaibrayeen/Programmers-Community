#include<iostream.h>
#include<conio.h>
void main()
{
 int n, item;
 cout<<"Enter size of array:";
 cin>>n;
 int A[size];
 for(int i=0;i<n;i++)
 {
  cout<<"\nEnter Array:";
  cin>>A[i];
  }
  cout<<"\nEnter element to be searched:";
  cin>>item;
  for(i=0;i<n;i++)
  {
    if(A[i]==item)
    {
      cout<<"Element found at"<<i;
      }
    else
    {
       cout<<"Element not found";
      }
    }
  getch();
}
    
