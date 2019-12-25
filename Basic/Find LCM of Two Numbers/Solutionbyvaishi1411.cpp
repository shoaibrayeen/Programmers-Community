//progran to find LCM
#include <iostream> 
using namespace std;  

//Function prototype
int find_LCM(int s, int v) ; 

//Driver code
int main() 
{ int s,v,res; 
	cout<<"Enter the two Numbers for LCM operation:";
	cin>>s>>v; 
res=find_LCM(s,v);
	cout<<"LCM OF "<<s<<" and "<<v<<" : "<<res;
	return 0;
} 

//Definition of the function
int find_LCM(int s, int v) 
{ 
	int lar = max(s, v); 
	int small = min(s, v); 
	for (int i = lar; ; i += lar) { 
		if (i % small == 0) 
			return i; 
	} 
} 
