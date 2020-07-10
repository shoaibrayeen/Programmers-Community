#include <iostream>
#include <algorithm>
using namespace std;

int getMaxLengthEvenOddSunarray(int arr[], int n)
{
    int result = 1;
    int current = 1;
    
    for(int i = 1;i < n;i++)
    {
        if(arr[i]%2 == 0 && arr[i-1]%2 != 0 || arr[i]%2 != 0 && arr[i-1]%2 == 0)
        {
            current++;
            result = max(result,current);
        }
        else
        {
            current = 1;
        }
    }

  return result;
}

int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    cout << "Maximum Length of Even-Odd Subarray is: " << getMaxLengthEvenOddSunarray(arr,n);

   return 0;
}