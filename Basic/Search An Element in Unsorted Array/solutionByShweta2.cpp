#include<iostream>
using namespace std;

int main()
{
  int n,i,num;
  cout<<"\nEnter the size of array:";
  cin>>n;
  int arr[n];
  cout<<"\nEnter the array elements:";
  for(i=0;i<n;i++)
  cin>>arr[i];
  cout<<"\nEnter the element to be searched:";
  cin>>num;
  for(i=0;i<n;i++)
  {
    if(arr[i]==num)
    { cout<<"YES";  return 0;}
  }
  cout<<"NO";
  return 0;
  }
