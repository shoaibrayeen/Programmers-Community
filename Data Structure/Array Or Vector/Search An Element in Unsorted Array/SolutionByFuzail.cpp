#include <bits/stdc++.h>
using namespace std ;

int linr_srch(int arr[] ,int x , int n )
{
    for (int i=0 ; i<n ; i++)
        {
            if(arr[i] == x)
            return i ;
        }
    return -1     ;
}


int main ()
{
    int n ,x, result ;
    cout << "enter the size of array" ;
    cin >> n ;
    int arr[n];
    cout << "enter the elements of array";
    for (int i=0 ; i<n ; i++) 
    {
       cin >> arr[i];
    }
    cout << "enter the element to be searched";
    cin  >> x ;
    result = linr_srch(arr , x , n);
    if (result== -1)
        {
       cout << "element not found";
        }
    else 
       cout <<"element found at"<< result ;
    
    return 0 ;
}
