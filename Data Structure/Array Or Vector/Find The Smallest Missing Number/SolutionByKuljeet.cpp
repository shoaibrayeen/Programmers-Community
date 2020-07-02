#include <iostream>
using namespace std;

int getSmallestMissing(int arr[], int start, int end)
{
    if(start > end)
       return end + 1;

    if(start != arr[start])
       return start;

    int mid = (start + end)/2;

    if(arr[mid] == mid)
       return getSmallestMissing(arr,mid + 1,end);
    
    return getSmallestMissing(arr,start,mid);
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    cout << getSmallestMissing(arr,0,n-1);
    return 0;
}


