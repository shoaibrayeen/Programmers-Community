#include <iostream>
#include <algorithm>
using namespace std;

int getMaximumdifference(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minValue = arr[0];

    for(int j = 1;j < n;j++)
    {
        res = max(res,arr[j]-minValue);
        minValue = min(minValue,arr[j]);
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >>  n;
    int arr[n];
    cout << "Enter the elements of an array:" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    cout << "Maximum difference is: " << getMaximumdifference(arr,n);
    
    return 0;
}