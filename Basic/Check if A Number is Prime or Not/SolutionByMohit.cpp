#include<iostream>
using namespace std;
void func(int a){
    bool flag=true;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            flag = false;
            break;
        }
    }

    if(flag=true)
    {
        cout<<" prime";

    }
    else{
        cout<<" not prime number";
    }
}
int main(int argc,char **argv)
{  
    int a;
    cout<<"enter the number";
    cin>>a;
    func(a);
}
