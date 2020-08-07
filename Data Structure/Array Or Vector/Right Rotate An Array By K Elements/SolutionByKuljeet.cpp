/*
Input:
Enter the size of an array:
6
Enter the elements of an array:
1
2
3
4
5
6
enter the value of k:
3

output:
4 5 6 1 2 3
*/
#include <iostream>
#include <algorithm>
using namespace std;

void rightRotate(int arr[], int n, int k)
{
    int i,j,d,temp;
    for(int i = 0;i < __gcd(k,n);i++)
    {
        temp = arr[i];
        j = i;
        while(1)
        {
            d = j + k;
            if(d >= n)
              d = d -n;
            if(d == i)
              break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }
}

void display(int arr[], int n)
{
    for(int i = 0;i < n;i++)
       cout << arr[i] << " ";
}

int main()
{
    int n;
    cout << "Enter the size of an array:"  << endl;
    cin >> n;
    int arr[n];
    cout << "\n Enter the elements of an array:" << endl;
    for(int i = 0;i < n;i++)
       cin >> arr[i];

    int k;
    cout << "\n enter the value of k:" << endl;
    cin >> k;
    rightRotate(arr,n,k);
    display(arr,n);

    return 0;
}

