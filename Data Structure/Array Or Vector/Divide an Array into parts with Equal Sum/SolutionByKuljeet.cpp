#include <iostream>
#include <algorithm>
using namespace std;

int findSplit(int arr[], int n)
{
    int i;
    int pre_sum = 0;
    int index1 = -1, index2 = -1;
    int Sum;
    Sum = arr[0];
    for(int i = 1;i < n;i++)
       Sum += arr[i];
    
    if(Sum%3 != 0)
       return 0;
    
    int Sum1 = Sum/3;
    int Sum2 = 2*Sum1;
    for(i = 0;i < n;i++)
    {
        pre_sum += arr[i];
        if(pre_sum == arr[i] && index1 == -1)
           index1 = i;
        else if(pre_sum == Sum2 && index1 != -1)
        {
            index2 = i;
            break;
        }
    }

    if(index1 != -1 && index2 != -1)
    {
        cout << "(" << index1 << "," << index2 << ")";
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of an array: " << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];
    
    if(findSplit(arr,n) == 0)
       cout << "-1";
    return 0;
}