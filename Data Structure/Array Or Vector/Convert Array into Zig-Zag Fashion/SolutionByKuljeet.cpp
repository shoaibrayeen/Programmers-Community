#include <iostream>
#include <algorithm>
using namespace std;

void zigZagfashion(int arr[], int n)
{
    bool flag = true;
    for(int i = 0;i < n;i++)
    {
        if(flag)
        {
            if(arr[i] > arr[i+1])
              swap(arr[i],arr[i+1]);
        }
        else
        {
            if(arr[i] < arr[i+1])
              swap(arr[i],arr[i+1]);
        }
        flag = !flag;
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
    cout << "enter the elements of an array:" << endl;
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    
    zigZagfashion(arr,n);
    display(arr,n);

    return 0;
}