#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str1){
	string str2(str1);
	reverse(str2.begin(), str2.end());
	if(str1 == str2){
		cout<<"'Yes'"<<endl;
	}	
	else{
		cout<<"'No'"<<endl;
	}
}
int main()
{
	int testcase;
	cin>>testcase;
	while(testcase--){
		string str;
		cin>>str;
		isPalindrome(str);
	}
	return 0;
}
