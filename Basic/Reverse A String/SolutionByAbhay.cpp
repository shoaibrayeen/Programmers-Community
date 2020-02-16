#include <bits/stdc++.h>
using namespace std;
void reverseString( string str){
	reverse(str.begin(), str.end());
	cout<<str<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		reverseString(st);
	}
	return 0;
}
