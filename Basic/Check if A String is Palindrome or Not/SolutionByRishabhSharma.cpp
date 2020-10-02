#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str)
{
	int n = str.length()-1;
	for(int i = 0; i<str.length()/2;i++)
	{
		if(str[i]!=str[n-i])
			return false;
	}

	return true;
}

int main()
{
	string s;

	cin>>s;
	bool b = checkPalindrome(s);

	if(b)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

}
