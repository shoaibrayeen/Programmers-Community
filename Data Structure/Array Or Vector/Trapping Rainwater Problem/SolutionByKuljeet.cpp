#include <iostream>
#include <algorithm>
using namespace std;

int getMaxRainwater(int arr[], int n)
{
    int res = 0;
    int leftMax[n],rightMax[n];

    leftMax[0] = arr[0];
    for(int i = 1;i < n-1;i++)
       leftMax[i] = max(arr[i],leftMax[i-1]);

    rightMax[n-1] = arr[n-1];
    for(int i = n-2;i >= 0;i--)
       rightMax[i] = max(arr[i],rightMax[i+1]);

    for(int i = 1;i < n-1;i++)
    {
        res =  res + (min(leftMax[i],rightMax[i]) - arr[i]);
    }

  return res;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];
    
    cout << getMaxRainwater(arr,n);
    return 0;
}