#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
	
	string s;
	cin>>s;
	int n = s.length();
	int i = 0, j = n-1;
	while(i<j){
		if(s[i]!=s[j])
			break;
		i++,j--;
		}
	if(i>=j)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<endl;
}
