/*
  An Array is given and You need to find the second largest number from the array.
*/

#include<iostream>
using namespace std;

int Second_LargestElement(int *arr,int n)
{
    int first_largest,second_largest;
    first_largest=arr[0];
    second_largest=arr[0];

    for(int i=0;i<n;i++)
    {
        if(first_largest<arr[i])
        {
            second_largest=first_largest;
            first_largest=arr[i];
        }
        else if(second_largest<arr[i] && arr[i]!=first_largest)
            second_largest=arr[i];
    }
    return second_largest;

}
int main()
{
    int size;
    cout<<"\nEnter size of array ";
    cin>>size;

    if(size>0)
    {

        int *arr=new int[size];
        cout<<"\nEnter element of array ";
        for(int i=0;i<size;i++)
                cin>>*(arr+i);
        if(size>1)
        {

            int Large=Second_LargestElement(arr,size);
            cout<<"\nSecond Largest element is "<<Large;
        }
        else
            cout<<"\nThere is no Second largest element";
    }
}
