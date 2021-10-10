#include <iostream>
using namespace std;

int* thirst_largest(int a[], int size){
	int first, second, third;
	first = second = third = a[0];
	
	for(int i=0; i<size; i++){
		
		if(a[i] > first){
			int t = first;
			first = a[i];
			third = second;
			second = t;
		}else if(a[i] > second){
			third = second;
			second = a[i];
		}else if(a[i] > third){
			third = a[i];
		}
	}
	
	int *largest = new int[3];
	largest[0] = first;
	largest[1] = second;
	largest[2] = third;
	
	return largest;
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	int *input = new int[n];
	
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	
	int *output = thirst_largest(input, n);
	
	for(int i=0; i<3; i++){
		cout<<output[i]<<" ";
	}
	return 0;
}
