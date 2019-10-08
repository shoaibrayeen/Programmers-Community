#include <iostream> 
using namespace std; 

  int binarySearch(int arr[], int key, int lb, int ub) {
    int mid; 
    while(lb<=ub){
      mid=(lb+ub)/2;
      
      if(key==arr[mid]){
        return mid;
      }
      else if(key<arr[mid]){
        ub=mid-1;
      }

      else{
        lb=mid+1;
      }
    } 
      return -1; 
  }  

  int main() { 
    
    int arr[100]; 
    int result,i,key,size,lb,ub; 
    
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements of array: "<<endl;
    
    for(i=0;i<size;i++){
      cin>>arr[i];
    }
    
    cout<<"Enter element to search: "<<endl;
    cin>>key;
    
    lb=0;
    ub=size-1;
    result = binarySearch(arr,key,lb,ub); 

    if(result==-1) {
      cout<<"Element not found!";
    }
    else {
      cout<<"Element found "<<endl;
    }

    return 0; 
}
