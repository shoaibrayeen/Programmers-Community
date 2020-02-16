#include <bits/stdc++.h>
using namespace std;
int oppoSign(int a,int b){
	return((a^b)>>31);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(oppoSign(a,b)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}