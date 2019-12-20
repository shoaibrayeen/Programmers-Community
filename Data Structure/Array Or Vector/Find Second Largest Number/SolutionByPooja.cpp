/*
  An Array is given and You need to find the second largest number from the array.
*/

#include<iostream>
using namespace std;

int Second_LargestElement(int *arr,int n)
{
    int first_largest=-10,largest;
    int smallest=arr[0];

    for(int i=0;i<n;i++)
       if(smallest>arr[i])
            smallest=arr[i];

  
    for(int i=1;i<=2;i++)                        //first iteration finds first largest element; 2nd iteration for second largest;
    {
        largest=smallest;
        for(int j=0;j<n;j++)
        {
                if(largest<arr[j])
                     if(first_largest!=arr[j])
                          largest=arr[j];
        }
        if(i==1)
            first_largest=largest;

    }
    return largest;
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

