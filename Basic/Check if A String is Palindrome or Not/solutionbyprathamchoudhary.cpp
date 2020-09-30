//program check for integers value for palindrome
//included header file
#include<iostream>

using namespace std;

//function declaration 
bool isPalindrome(int N);

int main(){
    //no to check
    int N;
    cout<<"enter the no to check: \n";
    cin>>N;

    //return value 1 if palindrome else 0
    cout<<isPalindrome(N)<<endl;

    return 0;
}

//function to reverse the initial no to check using recursion
void rev(int n,int &rn){
    if(n==0)
        return ;
    rn=rn*10+n%10;
    rev(n/10,rn);
}

//return the final value after check
bool isPalindrome(int n)
{
    int rn=0;
    rev(n,rn);
    return n==rn;
}