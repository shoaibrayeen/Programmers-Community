#include <iostream>
using namespace std;

void swap(int *a,int i,int j)
{
   int temp=a[i];
   a[i]=a[j];
   a[j]=temp;	
}
void Sorting(int *a,int n)
{
   int j=0;
   for(int i=0;i<n;i++)
   {
   	  if(a[i]==0)
   	  {
   	  
   	  	for(j=i;j<n;j++)
   	  	{
   	  		if(a[j]!=0)
   	  			swap(a,i,j);
   	  	}

   	  }
   }
 



}
int main()
{
	int n;
	cin>>n;

	int *a=new int[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	Sorting(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i];
}
