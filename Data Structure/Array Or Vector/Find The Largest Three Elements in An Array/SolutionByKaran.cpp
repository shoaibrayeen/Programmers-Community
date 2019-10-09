#include <iostream>
using namespace std;
void largest(int a[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int k=size-1;k>=size-3;k--){
		cout<<a[k]<<" ";
	}
}
int main() {
	int s, b[100];
	cout<<"Enter the size of array: \n";
	cin>>s;
	for(int l=0;l<s;l++){
		cin>>b[l];
	}
	largest(b,s);
	return 0;
}
