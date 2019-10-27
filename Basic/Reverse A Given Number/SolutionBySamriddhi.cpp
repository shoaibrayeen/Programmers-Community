#include <bits/stdc++.h>
using namespace std;

int rev(int n)
{
	if(n<=9)
	return n;
	
	int i,num=0;
	for(int j=n; j>0; j/=10)
	{
		i = j%10;
		num*=10;
		num+=i;
	}
	return num;
}
int main() {
	int n;
	cin>>n;         //Enter number to be reversed
	cout<<rev(n);   //After reversal
	
	return 0;
}
