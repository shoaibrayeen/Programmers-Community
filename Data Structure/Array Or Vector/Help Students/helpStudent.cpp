#include <iostream>
#include <conio.h>

using namespace std;

void sortedArray(int arr[], int num){
    for(int i=1 ; i<num-1 ; i++){   
        if(i%2==1){
            if(arr[i-1]>arr[i])
                swap(arr[i-1], arr[i]);
            if(arr[i+1]>arr[i])
                swap(arr[i+1], arr[i]); 
        }else{
            if(arr[i-1]<arr[i])
                swap(arr[i-1], arr[i]);
            if(arr[i+1]<arr[i])
                swap(arr[i+1], arr[i]);
        }
    }
}

int main(){
    int num, *arr;
    cout<<"Enter number of students";
    cin>>num;
    cout<<"Enter hight of students";
    arr = new int[num];
    for(int i=0; i<num; i++)
        cin>> arr[i];
    sortedArray(arr, num);      // using call by reference
    for(int i=0; i<num; i++)
        cout<< arr[i]<< "\t";

    return 0;
}
