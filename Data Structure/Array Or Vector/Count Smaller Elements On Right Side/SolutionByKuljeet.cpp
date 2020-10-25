#include <iostream>
using namespace std;

void countSmaller(int arr[], int n)
{
    int count;
    int countSmaller[n];

    for(int i = 0;i < n;i++)
    {
        count = 0;
        for(int j = i+1;j < n;j++)
            if(arr[j] <= arr[i])
               count++;
        countSmaller[i] = count;
    }

    for(int i = 0;i < n;i++)
       cout << countSmaller[i] << " ";
}


int main()
{
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    int *arr=new int[n];
     if(n > 0)
     {
          cout<<"Enter element of array ";
          for(int i=0;i<n;i++)
                    cin>>arr[i];

          countSmaller(arr,n);

     }
    return 0;
}