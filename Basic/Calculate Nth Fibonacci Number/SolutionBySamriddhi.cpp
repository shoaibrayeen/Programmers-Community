#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if(n==0)
	return 0;
	
	else if(n<=2)
	return 1;
	
	int i=1,k=1,f=0;
	for(int j=4; j<=n; j++)
	{
		f = i + k;
		i = k;
		k = f;
	}
	return k;
}
int main() {
	int n;
	cin>>n;            //Enter number n
	cout<<fib(n);     //Nth fibonacci number
	
	return 0;
}
