#include<iostream>
using namespace std;
bool search1(int arr[],int size1,int k){
    for(int i=0;i<size1;i++){
        if(arr[i]==k){
            return true;
        }
    }
return false;
}
int main(){
    int arr[100];
    int size1,k;       //k is the no. we need to search

 
    cin>>size1;
    cout<<endl;
   
    for(int i=0;i<size1;i++){
        cin>>arr[i];
     }

   
    cin>>k;

    
    if(search1(arr,size1,k)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

return 0;
}
