#include <bits/stdc++.h>
using namespace std;

float power(float b, float p)
{
	float num=b;
	
	if(p==0)
	return 1;
	
	for(int i=abs(p);i>1;i--)
		num=num*b;
		
	if(p>0)
	return num;
	
	else return 1/num;
	
}
int main() {
	float base,pow;
	cin>>base>>pow;
	cout<<power(base,pow);
	
	return 0;
}
