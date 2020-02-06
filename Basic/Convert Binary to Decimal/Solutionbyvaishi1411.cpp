	// program to convert a binary number to decimal number 
	#include <iostream> 
	#include<cmath>
	using namespace std; 
	// function to convert binary to decimal 
	void bin_To_Dec(long v) 
	{  
		int dec_num=0,i=0,rem;    
		while(v!=0) 
		{ 
			rem=v%10; 
			v/=10;
			dec_num += rem*pow(2,i);
			++i;
		}
	  cout<<"Decimal no. is: "<<dec_num;	
	} 
	
	// Driver code
	int main() 
	{ 
		long shi;
		cout<<"Enter a binary number: "; 
		 cin>>shi;
		bin_To_Dec(shi); 
		return 0; 
	} 
