#include<iostream>
using namespace std;
//this solution uses one more array to reverse given string
int main(){
    char arr[10000];
    int length;
    char arr1[10000];
    cin>>length;
    for(int i = 0;i<length;i++){
        cin>>arr[i];
    }
    for(int i= 0;i<length;i++){
        arr1[i]=arr[length-1-i];
    }
    //printing reversed string
    cout<<arr1;
return 0;
}
