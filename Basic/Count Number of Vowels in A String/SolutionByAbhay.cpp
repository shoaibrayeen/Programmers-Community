#include<bits/stdc++.h>
using namespace std;
int noVowels(string str){
	int c=0,i=0;
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			c++;
		}
		i++;
	}
	return c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string sl;
		cin>>sl;
		transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
		int number=noVowels(sl);
		cout<<number<<endl;
	}
}