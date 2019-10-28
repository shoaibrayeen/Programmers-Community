#include<iostream>
	using namespace std;
	int main()
	{ int shi[100],v,n,i=0,res=0;
	 
	 cout<<"Enter the size of the array: ";
	 cin>>n; 
	 cout<<"Enter the elemets of the array (max. to size): ";
	 for(i=0;i<n;i++) 
	  cin>>shi[i]; 
	
	 cout<<"Enter the element to be searched :";
	 cin>>v;  
	   for(i=0;i<n;i++)
	   { 
	      if(shi[i]==v) 
	      res=1;
	
	   } 
	  if(res==1) 
	  cout<<"Found!!"; 
	  else 
	  cout<<"Not Found!!";
	 return 0;
	}
