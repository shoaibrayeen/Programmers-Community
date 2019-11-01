//leap year 
#include<iostream>
using namespace std;
 //driver code
 int main() {  
	 int shi;
        
	 cout<<"Enter a year : ";
          cin>>shi;
	
	    if(shi%400==0) 
	     cout<<"Leap Year!!"; 
	    else if (shi%100==0) 
	     cout<<"Not a Leap Year!!"; 
	     else if (shi%4==0)
	       cout<<"Not a Leap Year!!";
	      else 
		 cout<<"Not a Leap Year!!";
  
     return 0;
 }
