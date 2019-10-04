#include <iostream>
using namespace std;

int* largest_three(int arr[], int size){
	int first, second, third;
	first = second = third = arr[0];
	
	for(int i=0; i<size; i++){
		
		if(arr[i] > first){
			int temp = first;
			first = arr[i];
			third = second;
			second = temp;
		}else if(arr[i] > second){
			third = second;
			second = arr[i];
		}else if(arr[i] > third){
			third = arr[i];
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
	
	int size;
	cin>>size;
	
	int *input = new int[size];
	
	for(int i = 0; i<size; i++){
		cin>>input[i];
	}
	
	int *output = largest_three(input, size);
	
	for(int i=0; i<3; i++){
		cout<<output[i]<<" ";
	}
	
	return 0;
}
