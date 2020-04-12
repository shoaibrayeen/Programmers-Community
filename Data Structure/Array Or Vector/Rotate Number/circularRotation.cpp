#include <iostream>
#include <conio.h>
using namespace std;

int numberOfDigits(int n) { 			// function to find length of digits
    int cnt = 0; 
    while (n > 0) { 
        cnt++; 
        n /= 10; 
    } 
    return cnt;
} 

int* numToArray(int num, int cnt){		// function to convert number to array
	// static int a[10];
	int* arr = new int[cnt];			// here array is defined Dynamically
	for(int i=cnt-1; i>=0 ; i--){
		arr[i]=num % 10;
		num=num/10;
	}
	return arr;
}

int arryToInt(int arr[], int count){	// funtion to convert array to integer
	int sum=0;
	for(int i=0; i<count; i++){
		sum *= 10;
		sum += arr[i];
	}
	return sum;
}

int leftRotate(int arr[], int rotate, int count){	// function to rotate left
	int temp;			
	for(int i=0; i<rotate ; i++){
		temp=arr[0];
		for(int j=0; j<count-1 ; j++)
			arr[j]=arr[j+1];
		arr[count-1]=temp;
	}
	return arryToInt(arr, count);;
}

int rightRotate(int arr[], int rotate, int count){	// function to rotate right
	int temp;
	for(int i=0; i<rotate ; i++){
		temp=arr[count-1];
		for(int j=count-1; j>0 ; j--)
			arr[j]=arr[j-1];
		arr[0]=temp;
	}
	return arryToInt(arr, count);;
}

int main(){
	int rotate, num, count;
	cout<<"Enter Number for rotation";
	cin>>num;
	cout<<"Enter number of rotation";
	cin>>rotate;
	cout<<endl;

	count = numberOfDigits(num);				// counting number of digits

	int *array = numToArray(num, count);		// generating array and reciving data from a function
	cout<<"Rotated array\n";
	if(rotate>0){								// left rotate
		cout<<leftRotate(array, rotate, count);				
	}else{										// right rotate
		rotate *= -1;
		cout<<rightRotate(array, rotate, count);
	}
	return 0;
}
// * means memmory location where the pointer is poiinting to
//& means value attached to