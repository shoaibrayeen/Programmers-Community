#include <iostream>
using namespace std;
void func(int a){

    while(a!=0)
    {
        int num=a%10;
        a=a/10;
        cout<<num;
    }

}
int main(int argc,char**argv){
    int a ; 
    cout<<"enter the number";
    cin>>a;
    func(a);
}
