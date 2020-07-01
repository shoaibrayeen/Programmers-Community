#include <iostream>
using namespace std;

void nextGreater(int arr[], int n)
{
    int next;
    for(int i = 0;i < n;i++)
    {
        next = -1;
        for(int j = i + 1;j < n;j++)
        {
            if(arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " --> " << next << endl;
    }
}


int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array:" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    nextGreater(arr,n);
    return 0;
}