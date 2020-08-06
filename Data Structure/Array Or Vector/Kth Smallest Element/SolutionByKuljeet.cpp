#include <iostream>
#include <algorithm>
using namespace std;

int kthSmaleest(int arr[], int n, int k)
{
    sort(arr, arr + n);

   return arr[k - 1];
}

int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    int k;
    cout << "\n Enter value of k:" << endl;
    cin >> k;
    cout << "\n Kth smallest element is: " << kthSmaleest(arr,n,k);

  return 0;
}