/*
     An Array is given and every element is appearing twice except one element. You need to find that element.
*/
#include<iostream>
using namespace std;

int ToFindElement(int arr[],int size)
{
    int temp,i,j;
    for(i=0;i<size-1;i++)                    // first sorting element  of array
    {
        temp=arr[i+1];
        j=i;
        while(temp<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(i=0;i<size;i++)                   //finding non repeated element;
    {
        if(arr[i]==arr[i+1])
              i=i+1;
        else
            return arr[i];
    }

}

int main()
{
    int size;
    cout<<"Enter the size of array ";
    cin>>size;

    int *arr=new int[size];
    cout<<"Enter the array element ";
    for(int i=0;i<size;i++)
            cin>>arr[i];

    int x=ToFindElement(arr,size);
    cout<<x;
}
