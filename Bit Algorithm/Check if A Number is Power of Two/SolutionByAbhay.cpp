#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int number){
	if(number==0){
		return false;
	}
	return ( (number & (number-1) )==0);
}
int main()
{
	int num;
	cin>>num;
	if(isPowerOfTwo(num)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}