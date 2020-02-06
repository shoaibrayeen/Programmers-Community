#include<iostream>
using namespace std;
void swap(int arr[],int pos, int first)
{
  int t;
  t=arr[pos];
  arr[pos]=arr[first];
  arr[first]=t;
}
void sort01(int arr[], int size)
{
  int i,f=0;
  for(i=0;i<size;i++)
  {
    if(arr[i]==0)
    { swap(arr,i,f);
      f++;
    }
  }

}
int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
sort01(a,n);
for(i=0;i<n;i++)
cout<<" "<<a[i];
return 0;
}
