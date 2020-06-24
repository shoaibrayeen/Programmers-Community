#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int low ,int high,int key)
{
    if(low == high)
    {
        if(arr[low] == key)
          return low;

        else
          return 0;
    }
    else{
        int mid = low + (high - low)/2;
        if(key == arr[mid])
           return mid;
        else if(arr[mid] > key)
            return binarySearch(arr,n,low,mid-1,key);
        else 
            return binarySearch(arr,n,mid+1,high,key);
    }
}


int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "\n Enter elements of an array:" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    int key;
    cout << "\n Enter the key to be searched:" << endl;
    cin >> key;
    int low = 0;
    int high = n - 1;
    cout << "\nElement found at: " << binarySearch(arr,n,low,high,key);

   return 0;
}