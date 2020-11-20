#include<bits/stdc++.h>
using namespace std;

int main()
{

	string ch;
	cout << "\nEnter String\t:\t";
	cin >> ch;
	int l=strlen(ch);
	for(int i=0;i<l/2;i++)
	{
     		char temp = ch[i];
     		ch[i] = ch[l-i-1];
		ch[l-i-1] = temp;
	}
	cout << "\nReversed String\t:\t" << ch;
	return 0;
}
