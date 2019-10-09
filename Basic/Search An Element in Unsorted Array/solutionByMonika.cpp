#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size1,k;      //k is the no. we need to search

    cin>>size1;

    for(int i=0;i<size1;i++){
        cin>>arr[i];
    }
    
    cin>>k;


    for(int i=0;i<size1;i++){
        if(arr[i]==k){
            cout<<"Yes";
            return 0;
        }
    }
    
  cout<<"No";

return 0;
}
