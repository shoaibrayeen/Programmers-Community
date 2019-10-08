// Unsorted array -> Linear search

#include <iostream>

using namespace std;

int unsorrted_search(int a[], int n, int elm) {
    
    int flag=0;
    for (int i=0;i<n;i++){
        if (elm == a[i]){
            cout<<"element "<<elm<<" found at:"<<i+1;
          flag=1;
        }
    }
    
    
    /* If want to print the statement outside the loop */ 
    // if (flag==1){
    //     cout<<"Element "<<elm<<" found";
    // }else{
    //     cout<<"Element not found";
    // }
    
}


int main()
{   int n,x;
    // int a[10];
    
    int a[10] = {1,2,4,5,3};
    
    n = sizeof(a)/sizeof(a[0]);
    x=5;
    /* If want the user to enter array, element to be found */
    
    // cout<<"Enter the size of an array";
    // cin>>n;
    
    // cout<<"Enter an array: ";
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    
    // cout<<"The entered array: ";
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    //     cout<<"\t";
    // }
    
    // cout<<"Enter the element to be searched: ";
    // cin>>x;
    unsorrted_search(a,n,x);
    
}
