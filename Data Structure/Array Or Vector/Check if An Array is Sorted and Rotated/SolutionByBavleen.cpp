#include <iostream>
using namespace std;

bool checkArr(int *a, int n){

    bool discontinuity = false;

    int i=0;
    while(i<n-1)
	{
        if(a[i] > a[i+1]){
            if(discontinuity == false){
                discontinuity = true;
            }else{
                return false;
            }
        }
    i++;
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

    int i=0;
    while(i<size)
    {
    	cin>>input[i];
		i++;
	}
        

    bool ans = checkArr(input,size);

    if(ans == true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
