#include<bits/stdc++.h>
using namespace std;
bool powOftwo(int );
   int main(){ 
			int shi;
			cout<<"Enter the number: ";
			cin>>shi;
					
					powOftwo(shi) ?cout<<"YES"<<endl : cout<<"NO";
					 
  return 0;
   }
    bool powOftwo(int v){ 
						if(v==0) 
						   return false; 
						  
						   return (ceil(log2(v)) == floor(log2(v)));
       }
