#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}

int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int main()
{
	int a,b;
	cout << "\nEnter First Number\t:\t";
	cin >> a;
	cout << "\nEnter Second Number\t:\t";
	cin >> b;

	cout << "\nLCM is\t:\t" << lcm(a,b) << endl;
	return 0;
}
