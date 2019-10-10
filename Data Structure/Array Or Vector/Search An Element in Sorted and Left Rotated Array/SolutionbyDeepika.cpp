#include<iostream>
using namespace std;

int searchIn(int a[],int s,int e,int key) {
    //Base case
    if(s>e){
    //if element noy found -1 is returned
        return -1;
    }
    //Rec case
    int mid=(s+e)/2;

    if(a[mid]==key){
        return mid;
    }
    //mid lies in the left part
    if(a[s]<=a[mid]){
            if(key>=a[s]&&key<=a[mid]){
            return searchIn(a,s,mid-1,key);
            }
            else{
            return searchIn(a,mid+1,e,key);
            }
    }
    //mid lies in right part
    if(key>=a[mid]&&key<=a[e]){
        return searchIn(a,mid+1,e,key);
    }
    return searchIn(a,s,mid-1,key);
}
int main()
{
    int key,sizeOfArray;
    cout<<"Enter size\n";
    cin>>sizeOfArray;
    int a[sizeOfArray];
    cout<<"\nEnter array\n";
    for(int i=0;i<sizeOfArray;i++) {
        cin>>a[i];
    }
    cout<<"\nEnter element to be searched\n";
    cin>>key;
    if(searchIn(a,0,sizeOfArray,key)==-1) {
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
    return 0;
}

