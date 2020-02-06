//no of digits in a no.
	#include<iostream>
	using namespace std;
		
		int main()
		{ 
		long shi; 
		int v=0;
		
		cout<<"Enter a positive number: "; 
		cin>>shi;
		if(shi==0) 
		v=1; 
	    else 
	    {  do 
		  { 
		  shi=shi/10;
	    	v++;
	    	} while(shi!=0); 
	    }
		cout<<"The number of digits in the entered number is: "<<v;
		return 0;
		}
