#include<bits/stdc++.h>
using namespace std;
// function to find nonrepeated element
int nonrepeated(int arr[],int n)
{
    int a = 0;
    for(int i = 0;i < n;i++)
      // using xor 
      a ^= arr[i];
     return a;
}

int main()
{
    int n , arr[10000];
    cin >> n;
    for(int i = 0;i < n;i++)
      // input the array
      cin>> arr[i];
   
    cout<< nonrepeated(arr,n) <<endl;
    return 0;
}
