#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int a[4];
	cout<<"Enter row and column respectively for matrix one"<<endl;
	cin>>a[0]>>a[1];
	cout<<"Enter row and column respectively for matrix second"<<endl;
	cin>>a[2]>>a[3];

	if (a[1]==a[2])
	{	
		cout<<"Enter Matrix 1 in given";
		int m1[a[0]][a[1]];
		for(int i=0; i<a[0]; i++){
			for(int j=0; j<a[1]; j++){
				cout<<"Enter element: R"<<i+1<<j+1<<endl;
				cin>>m1[i][j];
			}
		}
		cout<<"Enter Matrix 2 in given";
		int m2[a[2]][a[3]];
		for(int i=0; i<a[2]; i++){
			for(int j=0; j<a[3]; j++){
				cout<<"Enter element: R"<<i+1<<j+1<<endl;
				cin>>m2[i][j];
			}
		}
		int sum=0;
		int m[a[0]][a[3]];
		for(int i=0; i<a[0]; i++){
			for(int j=0; j<a[3]; j++){
				for(int k=0; k<a[2]; k++){
				sum=sum+(m1[i][k]*m2[k][j]);
				}
			m[i][j]=sum;
			cout<<m[i][j]<<"    ";
			sum=0;
			}
		cout<<endl;
		}
	}
	else{
		cout<<"Multipication is not possible because the number of columns in first matrix is not equal the number of rows in second matrix.";
	}
	getch();
	return 0;
}