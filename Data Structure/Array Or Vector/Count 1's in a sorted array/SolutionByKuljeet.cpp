#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == 0)
           low = mid+1;
        
        else
        {
            if(mid == 0 || arr[mid-1] != arr[mid])
                return (n-mid);
            else
                high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array:" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    cout << "No. of 1's in an array is: " << countOnes(arr,n);
    return 0;
}