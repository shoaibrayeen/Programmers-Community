/*
  program to find the smallest missing number
  time complexity O(n)
*/
#include <bits/stdc++.h>
using namespace std;

int missingNum(int arr[], int N, int M) {
    int missingNumber;
    for(int i=0; i<N && i<M; i++) {
        if(arr[i] != i){
            missingNumber = i;
            break;
        }
    }
    return missingNumber;
}

int main()
{
    int N, M, missingNumber;
    cout<<"enter size of array"<<endl;
    cin>>N;
    int arr[N];
    cout<<"enter elements of array"<<endl;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    cout<<"enter M"<<endl;
    cin>>M;

    if(arr[N-1] == N-1){
        missingNumber = N;
    }else{
        missingNumber = missingNum(arr, N, M);
    }
    cout <<"smallest missing number is : "<<missingNumber<< endl;
    return 0;
}
