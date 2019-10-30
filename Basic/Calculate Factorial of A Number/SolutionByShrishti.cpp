#include<iostream.h>
#include<conio.h>


int fact(int x){
	if(x>=1){
		return x*fact(x-1);
		
	}else
		return 1;
}

int main() {
  clrscr();
	int n;
	cout<<"enter the number";
	cin>>n;
	cout<<"Factorial of"<<n<<"is:"<<fact(n);
	getch();
	return 0;
}
