	#include<iostream> 
	using namespace std; 
	
	bool is_digi(string ); 
	//driver code  
	 int main(){ 
	 string shi; 
	 
	  cout<<"Enter a String : ";
	  cin>>shi; 
	  if(is_digi(shi)) { 
	        cout<<"Purely Numeric String!";
	  } 
	  else { 
	  cout<<"Have character other than digits too!!";
	  }
	  
	return 0;
	 }
	 
	//function 
	bool is_digi(string v){ 
      int i;
 	    for (i = 0; i < v.length(); i++) { 
 	      
		   if (isdigit(v[i]) == false) 
            
			return false; 
		 }
     
    return true;      
	}
