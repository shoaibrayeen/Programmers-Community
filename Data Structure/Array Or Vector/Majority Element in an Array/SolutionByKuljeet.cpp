#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n)
{
    int res = 0;
    int count = 1;
    for(int i = 1;i < n;i++)
    {
        if(arr[res] == arr[i])
           count++;
        else
           count--;

        if(count == 0)
        {
            res = i;
            count = 1;
        }
    }

    count = 0;
    for(int i = 0;i < n;i++)
       if(arr[res] == arr[i])
          count++;
    
    if(count <= n/2)
       res = -1;
    
   return res;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];
    
    cout << "Index of Majority element is: " << findMajorityElement(arr,n);
    return 0;
}