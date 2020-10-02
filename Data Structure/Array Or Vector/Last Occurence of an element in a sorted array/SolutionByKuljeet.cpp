#include <iostream>
using namespace std;

int lastOccurence(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;

        if(arr[mid] < x)
           low = mid+1;

        else if(arr[mid] > x)
            high = mid-1;
        
        else
        {
            if(mid == n-1 || arr[mid] != arr[mid+1])
               return mid;
            else
               low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];
    
    int x;
    cout << "Enter the element" << endl;
    cin >> x;
    cout << "Last Occurence of an elements is: " << lastOccurence(arr,n,x);
    return 0;
}