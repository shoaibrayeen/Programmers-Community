#include <iostream>
using namespace std;

void oddeven (int n)
{
	while(n>9)
		n/=10;
    
	n/=2;
	if(n==0)
	cout<<"EVEN";
	else cout<<"ODD";
}
int main() {
	int n;
	cin>>n;
	oddeven(n);
	return 0;
}
