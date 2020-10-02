#include <iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == key)
           return i;
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter Size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "\n Enter elements of an array:" << endl;
    for(int i = 0;i < n;i++)
      cin >> arr[i];

    int key;
    cout << "\n Enter Key to be Searched:" << endl;
    cin >> key;
    int result = linear_search(arr,n,key);
    if(result == -1)
       cout << "Element not found" << endl;

    else
       cout << "Element found at: " << result; 

  return 0;
}