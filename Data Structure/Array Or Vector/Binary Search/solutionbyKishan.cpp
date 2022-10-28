#include<iostream>
using namespace std;
int main(){

    int n,start,end,mid,target;
    cout<<"Enter the length of array "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter elements of array "<<endl;
        cin>>arr[i];
    }
    
    start=0;
    end=n-1;
    
    cout<<"Enter the value which you want to search "<<endl;
    cin>>target;

    while(start<=end){
        mid=(start+end)/2;

        if(arr[mid]==target){
            cout<<"Your target is available at index "<<mid+1<<endl;
            exit (0);
        }


        else if(arr[mid]<target){
          
          start=mid+1;

        }

        else if(arr[mid]>target){
            end=mid-1;
        }


        
    }
    cout<<"Target not found"<<endl;


    return 0;
}