#include <iostream>
using namespace std;

bool checkArray(int *arr, int n){

    bool discontinuity = false;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            if(discontinuity == false){
                discontinuity = true;
            }else{
                return false;
            }
        }
    }

    if(discontinuity == true){
        return true;
    }else{
        return false;
    }
}

int main() {

    int size;

    cin>>size;
    int *input=new int[size];	

    for(int i=0;i<size;i++)
        cin>>input[i];

    bool ans = checkArray(input,size);

    if(ans == true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
