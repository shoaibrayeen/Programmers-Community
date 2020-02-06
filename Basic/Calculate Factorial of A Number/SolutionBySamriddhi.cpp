#include <iostream>
using namespace std;

int fact(int num)
{
	int i,f=1;
	for(i=num;i>0;i--)
		f=f*i;
		
return f;
}

int main() {
	int num;
	cin>>num;           //enter number whose factorial is to be calculated
	cout<<fact(num);   // After calculation
	return 0;
}
