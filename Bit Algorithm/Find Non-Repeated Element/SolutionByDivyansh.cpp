#include<iostream>
using namespace std;
int chkNonRepeat(int a[],int size){
	int i,j,Xor;
	Xor=a[0];
	for(i=1;i<size;i++){
		Xor^=a[i];
	}
return Xor;
}
int main(){
	int size;
	cout<<"Enter size of array: "<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter elements of array:"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Non repeated number: "<<chkNonRepeat(a,size);
return 0;
}
