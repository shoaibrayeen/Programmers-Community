#include<iostream>
using namespace std;
int main(){
    int digit = 0;
    int n;
    cout<<"enter digit"<<endl;
    cin>>n;
    if(n==0){
        digit=1;
    }
    while(n!=0){
        n = n/10;
        digit++;
    }
    cout<<digit;
    return 0;
    
}
