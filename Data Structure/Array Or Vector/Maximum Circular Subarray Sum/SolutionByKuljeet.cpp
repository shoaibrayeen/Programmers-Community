#include <iostream>
#include <algorithm>
using namespace std;

//Standard Kadane's
int normalMaxSum(int arr[], int n)
{
    int res = arr[0],maxEnding = arr[0];
    for(int i = 1;i < n;i++)
    {
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}

int overAllMaxSum(int arr[], int n)
{
    //First calculate the max normal
    int max_normal = normalMaxSum(arr,n);
    if(max_normal < 0)
       return max_normal;
    
    //Calculate the circular sum
    int arr_sum = 0;
    for(int i = 0;i < n;i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }

    int max_circular = arr_sum + normalMaxSum(arr,n);
  return max(max_circular,max_normal);
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
    
    cout << "Maximum Circular Subarray sum is: " << overAllMaxSum(arr,n);
    return 0;
}