#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n){
	if(n>=1){
		return n*fact(n-1);
		
	}else
		return 1;
}

int main() {
	int n,i;
	cout<<"enter the number";
	cin>>n;
	cout<<"factorial of"<<n<<"is:"<<fact(n);
	getch();
	return 0;
}
