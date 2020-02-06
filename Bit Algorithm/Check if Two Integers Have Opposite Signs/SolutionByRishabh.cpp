 
#include<iostream> 
using namespace std;


//  using XOR to compare 

bool Signs(int x, int y) 
{ 
	return ((x ^ y) < 0); 
} 

int main() 
{ 

	/*if different signs returns 1 
	else returns 0
	because (-100) means 0 and (100) means 1 
	*/


	int x,y;
	cin>>x>>y;

	//cout<<Signs(x,y);

	if (Signs(x, y)) 
	 cout<<"Yes";
	else
	 cout<<"No"; 
} 
