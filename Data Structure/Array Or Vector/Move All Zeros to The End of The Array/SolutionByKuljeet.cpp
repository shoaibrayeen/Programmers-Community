#include <iostream>
using namespace std;

void pushZeroesToEnd(int arr[], int n)
{
    int count = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] != 0)
           arr[count++] = arr[i];
    }

    while(count < n)
         arr[count++] = 0;
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
    cout << "Enter the elements of an array:" << endl;
    for(int i = 0;i < n;i++)
        cin >> arr[i];

    pushZeroesToEnd(arr,n);
    display(arr,n);

    return 0;
}