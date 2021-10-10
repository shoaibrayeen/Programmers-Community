/*
    Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.
    Input: set[] = {3, 34, 4, 12, 5, 2} , sum = 9
    output : true/false
*/

#include <iostream>
using namespace std;

bool subset_sum(int* arr, int n, int sum)
{
    if (n == 0)
        return false;
    if (sum == 0)
        return true;

    if (arr[n - 1] <= sum)
        return subset_sum(arr, n - 1, sum - arr[n - 1]) || subset_sum(arr, n - 1, sum);
    else
        return subset_sum(arr, n - 1, sum);
}

int main()
{
    int n, sum;
    cout << "Enter the size of array  ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter array element ";
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    cout << "Enter the sum ";
    cin >> sum;

    subset_sum(arr, n, sum) ? cout << "Exist " : cout << "Not Exist ";
}
