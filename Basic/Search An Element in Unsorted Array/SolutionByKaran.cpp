#include <iostream>
using namespace std;
void search(int a[],int size,int element){
	int f=0;
	for(int i=0; i<size ; i++){
		if(a[i]==element){
			f=1;
		}
	}
	if(f==1){
		cout<<"YES";
	}else 
	{
		cout<<"NO";
	}
}
int main() {
	int a[],s,e;
	cout<<"Enter size of the array"
	cin>>s;
	cout<<"Enter the array"
	for(int i=0; i<s; i++){
		cin>>a[i];
	}
	cout<<"Enter the element"
	cin>>e;
	search(a,s,e);
	return 0;
}
