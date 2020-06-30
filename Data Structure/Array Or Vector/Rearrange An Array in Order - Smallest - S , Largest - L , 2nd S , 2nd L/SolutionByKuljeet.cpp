#include <iostream>
#include <algorithm>
using namespace std;

void rearrangeArray(int arr[], int n)
{
    sort(arr,arr+n);
    int temp[n];
    int low = 0;
    for(int i = 0,j = n - 1;i <= n/2 || j > n/2;i++ , j--)
    {
        temp[low] = arr[i];
        low++;
        temp[low] = arr[j];
        low++;
    }  

    for(int i = 0;i < n;i++)
      arr[i] = temp[i];
}

void display(int arr[], int n)
{
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements in an array:" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];
    
    rearrangeArray(arr,n);
    display(arr,n);
    return 0;
}