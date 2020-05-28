#include <bits/stdc++.h>
using namespace std ;
int bin_srch (int arr[] , int low , int high , int z )
{
    int mid ;
    while (low<=high)
        {
            mid  = low + (high-low)/2 ;
            
            if (arr[mid]==z)
                {
                    return mid ;
                }          
            else if (arr[mid] < z)
               {
                    low = mid +1 ;
               } 
            else 
                {
                 high = mid -1 ;
                }
        }
    return -1 ;             
}


int main ()
{  
     int x ;
    cout << "enter length of array";
    cin >> x ;
    int arr [x];
    int result ,low , high ,  z ;
    cout << "enter the sorted array";
    for(int i=0 ; i<x; i++)
        {
            cin >> arr[i] ;
        }
   cout << "enter element to be searched";
   cin >> z ;
   low = 0 ;
   high = x -1 ;
   result = bin_srch(arr , low , high  , z) ;
   cout << result ;
   return 0;
}
