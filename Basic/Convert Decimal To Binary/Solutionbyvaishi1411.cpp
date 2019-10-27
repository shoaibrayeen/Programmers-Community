// program to convert a decimal number to binary number 

#include <iostream> 
using namespace std; 

// function to convert decimal to binary 
void dec_To_Bin(int v) 
{  
	int binary_Num[100];  
	int i = 0; 
	while (v > 0) { 
		binary_Num[i] = v % 2; 
		v = v / 2; 
		i++; 
	}  
	for (int j = i - 1; j >= 0; j--) 
		cout << binary_Num[j]; 
} 

// Driver code
int main() 
{ 
	int shi;
	cout<<"Enter a decimal number: ";
	cin>>shi; 
	dec_To_Bin(shi); 
	return 0; 
} 
