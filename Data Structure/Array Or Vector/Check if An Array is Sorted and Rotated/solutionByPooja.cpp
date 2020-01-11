/*
An Array is given and You need to check if it's sorted and rotated.
*/
#include<iostream>
using namespace std;

bool is_rotated_sorted(int *arr,int n)
{
    /*
    concept:-
        if array is sorted and then rotated then all elements before minimum will be in increasing order and all elements after
        minimum element will be in increasing order
    */
    int smallest,smallest_pos;
    smallest=arr[0];

    for(int i=1;i<n;i++)               //finding smallest element
        if(smallest>arr[i])
        {
            smallest=arr[i];
            smallest_pos=i;
        }

    if(smallest!=arr[0])
    {
        for(int i=0;i<smallest_pos;i++)            //checking if element before smallest element are in increasing order or not
        {
            if(i+1!=smallest_pos)
                if(arr[i]>arr[i+1])
                    return 0;
        }
        for(int i=smallest_pos;i<n;i++)              //checking if element after smallest element are in increasing order or not
        {
            if(i!=n)
                if(arr[i]>arr[i+1])
                    return 0;
        }
        return 1;
    }

    return 0;


}

int main()
{
    int size;
    cout<<"Enter the size of array ";
    cin>>size;

    int *arr=new int[size];
    cout<<"Enter array element: ";
    for(int i=0;i<size;i++)
        cin>>*(arr+i);

    bool check=is_rotated_sorted(arr,size);
    if(check==1)
        cout<<"\nYES";
    else
        cout<<"\nNO";
}
