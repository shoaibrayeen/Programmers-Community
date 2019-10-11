#include<iostream>
using namespace std;

int factorial( )
{
    int a;
	cout<<"enter the number for the factorial";
	cin>>a;
	
		long int fact =1;
		
		
	if(a<0)
   {    
         cout<<"not eligible";
	       
	       return 0;
   }  
  else
       
       	for(int i=1;i<=a;i++)
	{
		
		fact = fact * i;		
	}
	return fact;
}


int main()
{
	
	int total = factorial ();
	
	cout<<"\n factorial is  "<<total;
	
}
