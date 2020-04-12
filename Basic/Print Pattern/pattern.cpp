#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a;
	cout<< "Enter a number";
	cin>>a;
	for (int i=0; i<a; i++){
		for(int j=0; j<a ; j++){
			if(j<=i)
				cout<< j+1 ;
			else
				cout<< ' ';
			cout<< "\t";
		}
		for(int j=a-2; j>=0; j--){
			if(j<=i)
				cout<< j+1 ;
			else
				cout<< ' ';
			cout<< "\t";
		}
		cout<<endl;
	}
	getch();
	return 0;
}