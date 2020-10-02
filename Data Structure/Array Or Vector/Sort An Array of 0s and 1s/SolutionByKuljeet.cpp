#include <iostream>
#include<algorithm>
using namespace std;

void sortAnArray01(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while(low < high)
    {
        while(arr[low] == 0 && low < high)
          low++;

        while(arr[high] == 1 && low < high)
          high--;

        if(low < high)
        {
            arr[low] = 0;
            arr[high] = 1;
            low++;
            high--;
        }
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
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    cout << "\n Enter the elements of an array:" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    sortAnArray01(arr,n);
    display(arr,n);

    return 0;
}