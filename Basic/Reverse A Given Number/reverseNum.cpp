#include<iostream>
using namespace std;
void reverseNum(int digit){
	while(digit>0){
		int n=digit%10;
		digit=digit/10;
		cout<<n<<"\t";
	}
}
int main(){
	int digit;
	cin>>digit;
	reverseNum(digit);
}