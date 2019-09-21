#include <iostream>
using namespace std;

int shiftZero(int arr1[] , int size)
{
    int size1 = 0;
    int i, j;
    
    size1 = size;
    
    for(i=0; i<size1; i++) 
    {
        if(arr1[i] == 0)
        {
            for(j = size1-1; j>=0; j--)
            if(j > i)
            {
                if(arr1[j] != 0)
                {
                 arr1[i] = arr1[i] + arr1[j];
                 arr1[j] = arr1[i] - arr1[j];
                 arr1[i] = arr1[i] - arr1[j];
                }
            }
            else
            break;
        }
    }
    
    for(i=0; i<size; i++) //printing the array after performing the action.
    {
        cout<<arr1[i];
    }
    
    
    return 0;
}

int main()
{
    int i=0, arr[10], size;
    cout<<"Enter the size of the array:";
    cin>>size;
    cout<<"\nEnter your array\n";
    
    for(i=0; i<size; i++) //taking the array as input from he user.
    cin>>arr[i];
    
    for(i=0; i<size; i++)//printing the array before calling the function.
    cout<<arr[i];
    cout<<"\n";
    shiftZero(arr , size); //callling the function to perform the action.
    return 0;
}
