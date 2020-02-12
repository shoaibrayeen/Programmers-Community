#include<bits/stdc++.h>
using namespace std; 	
int GCD(int a,int b){
    if (b == 0) 
        return a; 
    return GCD(b, a % b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1<<" and "<<n2<<endl;
		cout<<"Output= "<<GCD(n1,n2)<<endl;
	}
	return 0;
}