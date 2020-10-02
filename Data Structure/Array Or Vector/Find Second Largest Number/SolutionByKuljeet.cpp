#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    if(n < 2)
    {
        cout << "Second largest element does not exist";
        return 0;
    }

    int largest = 0;
    int secondLargest = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] > largest )
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
           
    }

   return secondLargest;
}

int main()
{
    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "\n Enter elements of an array:" << endl;
    for(int i = 0;i < n;i++)
      cin >> arr[i];

    cout << "\n Second largest in an array is: " << secondLargest(arr,n);

   return 0;
}