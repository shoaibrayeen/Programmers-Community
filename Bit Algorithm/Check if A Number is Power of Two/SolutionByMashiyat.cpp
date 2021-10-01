#include <iostream>
using namespace std;

void countsetBits(int n){
    int count = 0;
    while(n>0){
        n &= (n-1);
        count++;
    }
    if(count==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return;
}


int main(){
	int n;
    cin>>n;
	countsetBits(n);
	return 0;
}
