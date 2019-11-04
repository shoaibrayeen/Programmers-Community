/*
    An Array is given and You need to compute sum of all the elements.
    1 < size Of Array <= 10^6
    0 < Array Elements <= 10^9
*/
#include<iostream>
using namespace std;

void input_array_element(int arr[],int size)
{
       int var;
       for(int i=0;i<size;i++)
          {
                 cout<<"Enter "<<i<<" element ";
                 cin>>var;
                 if(var>0)
                       arr[i]=var;
                 else
                 {
                       cout<<"enter valid element\n";
                       i--;
                 }
          }

}

void sum_array_element(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
                sum+=arr[i];

          cout<<sum;

}

int main()
{
    int size;
    cout<<"Enter the size of array ";
    cin>>size;

    if(size>0)
    {
          int arr[size];
          input_array_element(arr,size);
          sum_array_element(arr,size);
    }
    else
          cout<<"enter valid size ";
}
