
#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cin>>size;
	int arr[size];
	
	//taking input
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];	
	}
	int k;
	//kth smallest value
	cin>>k;	
	//sort the array 
	sort(arr,arr+size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"kth smallest: "<< arr[k-1];
}
