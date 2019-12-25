#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cout<<"Enter a Number to find its factors.\n";
	cin>>num;
	for(int i=1 ; i<=num/2; i++){
		if(num%i==0){
			cout<<i<<", ";
		}
	}
	cout << " and " << num;
	cout<<" are the factors of the number.\n";
	return 0;
}
