#include <bits/stdc++.h>
using namespace std;

int main() {  

  
	int n;
	cout<<"Enter the size of array"<<endl;
  cin >>n;
	int array[n];
  
	for( int i = 0; i <n; i++ ) 
  {
		cin >> array[i];
	}
  
	int total_sum = ( ( n + 1 ) * ( n + 2 ) ) / 2; 
	
	int sum = 0;
	for(int i = 0; i < n; i++) 
  {
		sum = sum + array[i];
	}
	cout << "\nThe missing number\t:\t" << (total_sum - sum);
}
