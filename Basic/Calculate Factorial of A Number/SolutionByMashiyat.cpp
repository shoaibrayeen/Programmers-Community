#include<iostream>
using namespace  std;

int fact(int n){
    int rev=1;
    for (int i = 2; i <= n; i++)
    {
        rev=rev*i;
    }
    return rev;
    
}

int main(){
    int number;
    cin >> number;
    cout<<fact(number);

    return 0;
}
