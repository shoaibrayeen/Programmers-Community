#include<bits/stdc++.h>
using namespace std;

string vowelOrConsonant(char ch){
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		return "Vowel";
	}else{
		return "Consonant";
	}
}

int main(){
	char ch;
	cin>>ch;
	cout<<vowelOrConsonant(ch)<<endl;
	return 0;
}
