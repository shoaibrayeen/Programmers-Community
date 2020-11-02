#include <iostream>
using namespace std;

int main() {
	int n, temp,i;
	cin>>n;
	temp=n;
	while(temp>0){
	i=temp%10;
		cout<<i;
		temp=temp/10;
	}
	// your code goes here
	return 0;
}
