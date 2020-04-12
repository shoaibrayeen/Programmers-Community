#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]){
	int num;
	cout<<"Enter a number to check weather it is pime or not.\n";
	cin>>num;
	for(int i=2; i<8; i++){
		if(num<=0){
			cout<<"Please Enter Natural Numbers"<<endl;
			exit(0);
		}
		else if(num%i==0 && num!=i){
			cout<<num<<" is not a prime Number.";
			exit(0);
		}
		if(i>=3){
			i++;
		}
	}
	cout<<num<<" is a prime Number."<<endl;
	return 0;
}
