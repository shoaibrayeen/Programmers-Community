#include <bits/stdc++.h>
using namespace std;
int lenOfString(string str){
	int l=0, i=0;
	while(str[i]!='\0'){
		++l;
		++i;
	}
	return l;
}
int main(){
	string strn;
	getline(cin,strn);
	cout<<lenOfString(strn)<<endl;
}
