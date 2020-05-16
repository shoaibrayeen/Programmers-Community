#include <bits/stdc++.h>
using namespace std;
int setBits(int number){
	int count=0;
	while(number!=0){
		if(number & 1 ==1){
			++count;
		}
		number=number>>1;
	}
	return count;
}
int main(int argc, char const *argv[])
{
	
	int number;
	cin>>number;
	cout<<setBits(number)<<endl;
	return 0;
}