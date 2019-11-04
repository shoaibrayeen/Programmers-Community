#include<iostream>
using namespace std;

void r_rotate(int shi[],int n , int v);

int main(){
    int n, i, v;
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    int *shi=new int [n];
    cout<<"\nEnter the elements of the array : ";
    for(i = 0; i < n; i++ ) {
        cin>>shi[i];
    }
    cout<<"Enter Rotation Value\t:\t";
    cin>>v;
    r_rotate(shi, n, v);
    cout<<"\nRight Rotated array by "<< v << " is\t:\t";
    for(i = 0; i < n; i++ ){
        cout<<shi[i] << "\t";
    }
    cout << endl;
    return 0;
}

void r_rotate(int shi[],int n,int v) {
    for(int i = 0; i < v; i++ ) {
        int l;
        l = shi[n-1];
        for(int j = n-1; j > 0; j-- ) {
            shi[j] = shi[j-1] ;
        }
        shi[0]=l;
    }
}
