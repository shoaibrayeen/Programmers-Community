/*
    Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.
    input : Array = {-2, -3, 4, -1, -2, 1, 5, -3}
    output: Maximum contiguous sum is 7

    Starting index 2
    Ending index 6

*/
#include<iostream>
#include<climits>
using namespace std;

//Brute Force approach
int max_sum = INT_MIN;

void solve(int *arr, int n)
{
    if(n == 0)
        return ;
    int sum = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
        if(max_sum < sum)
            max_sum = sum;
    }

    solve(arr, n - 1);
}

int main()
{
    int n;
    cout << "Enter size ? ";
    cin >> n;

    int *arr = new int [n];
    cout << "Enter array ";
    for(int i = 0; i < n; i++)
        cin >> i[arr];

    cout << solve(arr , n);

}
