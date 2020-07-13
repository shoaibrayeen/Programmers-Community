#include <iostream>
using namespace std;

int getEquilibriumPoint(int arr[], int n)
{
    int sum = 0;
    for(int i = 0;i < n;i++)
       sum += arr[i];
    
    int left_sum = 0;
    for(int i = 0;i < n;i++)
    {
        sum -= arr[i];
        if(left_sum == sum)
           return i;
        
        left_sum += arr[i];
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: " << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];
    
    cout << "Equilibrium Point is: " << getEquilibriumPoint(arr,n);
    return 0;
}