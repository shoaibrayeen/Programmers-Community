


// recursive binary search
#include<iostream>
using namespace std;
//#define i int
int binary_search(int *arr,int i,int n,int key){
    if(i>n){
        return -1;
    }
    int mid=i+(n-i)/2;
 
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
       return binary_search(arr,i,mid-1,key);
    }
    else{
      return binary_search(arr,mid+1,n,key);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
      cin>>arr[j];
    }
    int toFind;
    cin>>toFind;
    //int arr[]={11,22,33,44,55,66,77,88,99};
    //int n=sizeof(arr)/sizeof(int);
    //cout<<n<<endl;
    cout<<binary_search(arr,0,n-1,toFind)<<endl;
    //cout<<sizeof(int);
}
