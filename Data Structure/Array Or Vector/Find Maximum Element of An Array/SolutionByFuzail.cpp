#include <bits/stdc++.h>
using namespace std ;

int max_ele(int arr[] , int n) 
{
    int max = arr[0] ;
    for (int i=0 ; i<n ; i++)
    {
        if (arr [i] > max)
        {
            max = arr [i] ;
        }
    }
    return max ;
}

int main ()
{
    int n ;
    cout << "Enter size of array " ;
    cin >> n ;
    int arr [n] ;
    cout << "enter the array" ;
    for (int i=0 ; i<n ; i++) 
    {
        cin >> arr[i] ;
    }
    int result ;
    result = max_ele(arr , n ) ;
    cout << result ;
    return 0 ;
}
