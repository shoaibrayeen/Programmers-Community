#include<iostream>
#include<vector>
using namespace std;

int input(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    return 0;
}
  
int lis(vector<int> arr, int n)
{
    int *l, i, j, maximum = 0;
    l = (int*)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
        l[i] = 1;
  
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (arr[i] > arr[j] && l[i] < l[j] + 1)
                l[i] = l[j] + 1;

    for (i = 0; i < n; i++)
        if (maximum < l[i])
            maximum = l[i];
  

    free(l);
  
    return maximum;
}
  
/* Driver program to test above function */
int main()
{
    int size;
    cin>>size;

    vector<int> arr(size,0);
    input(arr);
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length of lis is "<<lis(arr, n);
    return 0;
}
