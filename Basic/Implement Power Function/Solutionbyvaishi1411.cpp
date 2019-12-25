//base raise to the power 
 #include<iostream> 
	 using namespace std;
	 //driver code 
	 int main()
	 { 
	 float s,v,n=1,res;
	 cout<<"Enter the base value: ";
	 cin>>s;
	 cout<<"Enter the exponent value: ";
	 cin>>v; 
	 
	  if(v<0) 
	  { 
	  for(int i=1;i<= -(v);i++)  
	 {
	    n=n*s;  
	 }
	     res=1/n;
	  }
	  else if(v>=0)  
	  { 
	   for(int i=1;i<=v;i++)  
	 {
	    n=n*s;  
	 } 
	   res=n;
	  }
	   
	  cout<<"Your Result!! "<<res;
	  return 0;
	 }
