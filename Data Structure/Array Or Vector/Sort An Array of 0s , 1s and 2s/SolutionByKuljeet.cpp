#include <iostream>
#include <algorithm>
using namespace std;

void sortAnArray012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while(mid <= high)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[low++],arr[mid++]);
                break;
            
            case 1:
                mid++;
                break;
            
            case 2:
                swap(arr[mid],arr[high--]);
                break;
        }
    }
}

void display(int arr[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    cout << "\n Enter elements of an array" << endl;
    for(int i = 0;i < n;i++)
        cin >> arr[i];

    sortAnArray012(arr,n);
    display(arr,n);

    return 0;
}