#include <iostream>
using namespace std;

int sum(int arr[],int n)
{
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        sum = sum + arr[i];
    }

  return sum;
}

int main()
{
    int n;
    cout << "Enter Size of array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    cout << "Sum of elements in an array is: " << sum(arr,n);

  return 0;
}