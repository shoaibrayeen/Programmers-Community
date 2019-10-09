#include<iostream>

using namespace std;

int non_repeated_element(int arr[], int n)
{
    int ans=arr[0];
    for(int i=1;i<n;i++)
    {

        ans ^= arr[i];
    }

return ans;
}

int main()
{  int size;

    cin>>size;

    int *array = new int[size];

    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    cout<<non_repeated_element(array,size);

return 0;
}
