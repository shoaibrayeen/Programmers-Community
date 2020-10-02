#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0;i < n;i++)
    {
        int flag = 0;
        for(int k = 0;k < n-k-1;k++)
        {
            if(arr[k] > arr[k+1])
            {
                swap(arr[k],arr[k+1]);
                flag = 1;
            }
        }
        if(flag == 0)
           break;
    }
}

void display(int arr[], int n)
{
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin >> arr[i];

    bubbleSort(arr,n);
    display(arr,n);
    return 0;
}