/*
    Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.
    input : Array = {-2, -3, 4, -1, -2, 1, 5, -3}
    output: Maximum contiguous sum is 7

    Starting index 2
    Ending index 6

    approach : max_so_far + current element , compare which one is greater i.e max_so_far + curr_ele , curr_ele and store max of these in max_so_far

*/
#include<iostream>
#include<climits>
using namespace std;

int solve(int *arr, int n)
{
    int max_sum = arr[0];        // contain maximum sum of contiguous subarray in array
    int max_sum_so_far = arr[0];  // maximum sum of subarray including ith element in array

    for(int i = 1; i < n; i++)
    {
        max_sum_so_far = max(max_sum_so_far + arr[i], arr[i]); 

        if(max_sum < max_sum_so_far)
            max_sum = max_sum_so_far;
    }
    return max_sum;
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
