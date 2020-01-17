#include<iostream>
using namespace std;

int ReverseNum(int N)
{
        int reverse=0;
        while(N>0) {
                reverse = (reverse*10)+(N%10);
                N = N/10;
        }
        return reverse;
}

int main()
{
        int N;
        cout<<"Enter Number: "<<endl;
        cin>>N;
        cout<<"Reverse of number: "<<ReverseNum(N)<<endl;
        return 0;
}
