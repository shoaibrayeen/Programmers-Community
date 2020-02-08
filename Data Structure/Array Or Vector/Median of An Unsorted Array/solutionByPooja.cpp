/*
An Unsorted Array is given and You need to find its median.
*/
#include<iostream>
using namespace std;

int* sort_array(int *array,int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=array[i];
        for(j=i-1;j>=0 && temp<array[j];j--)
            array[j+1]=array[j];
        array[j+1]=temp;
    }
    return array;
}

float median_of_array(int *arr,int n)
{

    if(n%2!=0)
        return (float)arr[n/2];
    else
        return (((float)arr[(n-1)/2]+(float) arr[n/2])/2);


}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int *arr=new int[size];
    cout<<"Enter array elements ";
    for(int i=0;i<size;i++)
        cin>>*(arr+i);

    arr=sort_array(arr,size);
    cout<<endl<<median_of_array(arr,size);

}
