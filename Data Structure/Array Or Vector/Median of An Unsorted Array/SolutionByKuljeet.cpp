#include <iostream>
#include <algorithm>
using namespace std;

double getMedian(int arr[], int n)
{
    sort(arr, arr + n);

    if(n%2 != 0)
       return (double)arr[n/2];

    else
       return (double)(arr[(n - 1)/2] + arr[n/2])/2.0;
}

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    cout << "Median of an unsorted array is: " << getMedian(arr,n);

   return 0;
}