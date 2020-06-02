#include <bits/stdc++.h>
using namespace std ;
void sort(int arr[] , int n)
{
    int temp ;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " " ;  
    }
    return ;
}


int main()
{
    int n ;
    cout << "Enter size of array" ;
    cin >> n;
    int arr[n] ;
    cout << "enter the array" ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i]  ;
    }
    sort(arr,n) ;
    return 0; 
}
