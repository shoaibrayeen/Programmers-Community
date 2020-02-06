/*
    An Unsorted Array is given. You need to find an element which is given to you.

*/
#include<iostream>
using namespace std;


bool check_for_element(int *arr,int size,int element)
{

    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
            return 1;
    }
    return 0;

}


int main()
{
   int size,element;
   bool check;
   cout<<"Enter the size of array ";
   cin>>size;

   int *arr=new int[size];
   cout<<"Enter element of array ";
   for(int i=0;i<size;i++)
        cin>>arr[i];

   cout<<"Enter an element that you want to search ";
   cin>>element;

   check=check_for_element(arr,size,element);

   if(check==1)
        cout<<"YES";
   else
        cout<<"NO";

}
