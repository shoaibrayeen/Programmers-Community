#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i,value,index;
    for(i = 1;i < n;i++)
    {
        value = arr[i];
        index = i - 1;
        while(index >= 0 && arr[index] > value)
        {
            arr[index + 1] = arr[index];
            index = index - 1;
        } 
        arr[index + 1] = value;
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

    insertionSort(arr,n);
    display(arr,n);
   return 0;
}