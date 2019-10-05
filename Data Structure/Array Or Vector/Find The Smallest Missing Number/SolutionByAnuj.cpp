#include <iostream>
using namespace std;

int smallest_missing(int arr[], int n, int m){
	int count = 0;
	
	for(int i=0; i<n; i++){
		if(arr[i] == count){
			count++;
		}else{
			break;
		}
	}
	
	return count;
	
}

int main() {
	// your code goes here
	
	int n, m;
	cin>>n>>m;
	
	int *input = new int[n];
	
	for(int i=0; i<n; i++){
		cin>>input[i];
	}
	
	int missing = smallest_missing(input, n, m);
	
	cout<<missing<<endl;
	
	return 0;
}
