#include <bits\stdc++.h>
using namespace std ;
void rev_array(int arr[] , int left , int right )
{   int temp ;
    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp ;
        left ++ ;
        right -- ;
    }
    return ;
}
void print(int arr[] , int n)
{
    for (int i=0 ; i<n ; i++)
    {
       cout << arr[i] ;
    }
    return ;
}

int main ()
{   
    int n ;
    cout << "Enter size of array";
    cin >> n ;
    int arr[n];
    cout << "enter the array";
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    
    int left = 0 ;
    int right = n-1 ;

    rev_array(arr , left ,right ) ;
    print(arr , n) ;
    
    return 0 ;
}   


