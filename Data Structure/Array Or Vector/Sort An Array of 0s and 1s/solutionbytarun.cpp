
#include<iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int i=0,j=0;
	while(i<size){
		if(arr[i]==0){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
		}
		i++;
		
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}
