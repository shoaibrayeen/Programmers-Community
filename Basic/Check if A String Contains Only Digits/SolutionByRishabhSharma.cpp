#include <bits/stdc++.h>
using namespace std;

bool CheckString(string str)
{
	int l=0;
	for(int i=0;i<=str.length();i++)
	{
		if(isdigit(str[i]))
		{
			l++;
			
		}

}
if(l==str.length())
	return true;

return false;
}

int main()
{
	string str;
	cout<<"Enter The String "<<endl;
	cin>>str;

	bool flag=CheckString(str);

	if(flag==true)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
