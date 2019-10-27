//baseTopower 
	
	#include<iostream> 
	#include<cmath>
	using namespace std;
	
	int main()
	{ 
	int s=0,v=0,res; 
	//s=base & v=power 
	
	cout<<"Enter the base value for the operation :";
	cin>>s;
	cout<<"Enter the exponent for the operation :";
	cin>>v;
	res=pow(s,v);
	cout<<"the result for "<<s<<" raise to "<<v<<" is : "<<res;
	return 0;
	
	}
