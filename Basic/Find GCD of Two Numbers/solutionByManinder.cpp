#include<iostream>
using namespace std;

int GCD(int n1,int n2){
    int rem;
    int o1=n1;
    int o2=n2;
    
    
    while (o1%o2!=0) {
        rem=o1%o2;
        o1=o2;
        o2=rem;
        
    }
    return o2;

}
int LCM(int n1,int n2){
//    int o1=n1;
//    int o2=n2;
    int g=GCD(n1,n2);
    int l=(n1*n2)/g;
    return l;
}

int main(){
    int n1,n2;
   cin>>n1;
   cin>>n2;
    
    cout<<GCD(n1,n2)<<"\n";
    //cout<<LCM(n1,n2);
}
