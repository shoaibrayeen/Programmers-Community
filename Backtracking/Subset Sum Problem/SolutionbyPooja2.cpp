/*
    Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.
    Input: set[] = {3, 34, 4, 12, 5, 2} , sum = 9
    output : true/false
*/

#include <iostream>
using namespace std;

bool subset_sum(int *arr, int n, int sum)
{

    bool t[n + 1][sum + 1];

    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j < sum + 1; j++)
        {
            if(i == 0)
                t[i][j] = false;
            if(j == 0)
                t[i][j] = true;
        }
    }

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < sum + 1; j++)
        {

            if(arr[i - 1] <= j)
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];

        }
    }

    return t[n][sum];
}

int main()
{
    int n, sum;
    cout << "Enter the size of array  ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter array element ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    cout << "Enter the sum ";
    cin >> sum;

    subset_sum(arr, n , sum) ? cout << "Exist " : cout << "Not Exist";

}
