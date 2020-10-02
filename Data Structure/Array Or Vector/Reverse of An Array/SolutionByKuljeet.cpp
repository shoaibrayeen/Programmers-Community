#include <iostream>
using namespace std;

void swap(int arr[], int front, int back)
{
    int temp = arr[front];
    arr[front] = arr[back];
    arr[back] = temp;
}

void reverseArray(int arr[], int n)
{
    int front = 0;
    int back = n -1 ;

    while(front < back)
    {
        swap(arr,front,back);
        front++;
        back--;
    }
}

void display(int arr[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of an array:" << endl;
    for(int i = 0;i < n;i++)
        cin >> arr[i];

    reverseArray(arr,n);
    display(arr,n);

  return 0;
}