// binary search first and last occurence 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   
   int i,start,end,mid;//arr[]={1,2,3,3,3,3,3,4,5,6,7,7,7,7,8,9,10};
   //int n=sizeof(arr)/sizeof(int);
   int n;
    cin>>n;
   int arr[n];
   for(int 0;i<n;i++){
     cin>>arr[i];
   }
    start=0;
    end=n-1;
    int key;
    cin>>key;
    int temp_ans=-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
           // cout<<"element found at : "<<mid<<endl;  
            //break;
            temp_ans=mid;// used to store position temporary
            end=mid-1;     //   1. used to traverse left as we are finding first occurence
          //  start=mid+1;     //  2. used for last occurence
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"first occurence of element found at position : "<<temp_ans<<endl;
}
