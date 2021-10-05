/*
  Program Description - This program return Nth Fibonacci number.
  Time Complexity: O(1)
  Space Complexity: O(1)
  
*/


#include<iostream>
using namespace std;
 
int Fib_variable(int n){
    if(n==0||n==1){return n;}
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
 
int main(){
    int n;
    cin>>n;
 
    cout<<Fib_variable(n);
    return 0;
}
