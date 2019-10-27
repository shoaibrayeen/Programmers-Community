//even odd check

#include <iostream> 
using namespace std; 

//true=even,false=odd
bool Even(int v) 
{	return ((v / 2) * 2 == v);  } 

// Driver code 
int main() 
{ 
	int shi;
	cout<<"Enter a number: ";
	cin>>shi; 
	Even(shi) ? cout << "Even" : cout << "Odd"; 
	return 0; 
} 
