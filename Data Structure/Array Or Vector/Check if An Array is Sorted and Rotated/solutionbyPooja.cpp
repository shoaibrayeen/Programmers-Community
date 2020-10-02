/*
    An Array is given and You need to check if it's sorted and rotated.
*/
#include<iostream>
using namespace std;

bool is_sorted_rotated(int *arr,int n)
{
    int small,small_pos=0;
    small=arr[0];
    for(int i=1;i<n;i++)
        if(small>arr[i])
        {
            small=arr[i];
            small_pos=i;
        }
    if(small_pos!=0)                    //checks smallest element is not at first place
    {
        for(int i=1;i<small_pos;i++)            //checking all element before smallest element are in increasing order
        {
            if(arr[i-1]>arr[i])
                return 0;
        }
        for(int i=small_pos+1;i<n;i++)              //checking all element after smallest element are in increasing order
        {
            if(arr[i-1]>arr[i])
                return 0;
        }
        return 1;
    }
    return 0;

}

int main()
{
    int size;
    cout<<"\nEnter the size of array ";
    cin>>size;

    int *arr=new int[size];
    cout<<"\nEnter the array element ";
    for(int i=0;i<size;i++)
        cin>>*(arr+i);

    bool check=is_sorted_rotated(arr,size);
    if(check==1)
        cout<<"\nYES";
    else
        cout<<"\nNO";
}
