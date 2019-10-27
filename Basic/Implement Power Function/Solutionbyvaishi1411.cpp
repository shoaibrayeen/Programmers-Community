//base raise to the power 
 #include<iostream> 
 using namespace std;
 
 //driver code 
 int main()
 { 
 float s,v,res=1;
 cout<<"Enter the base value: ";
 cin>>s;
 cout<<"Enter the exponent value: ";
 cin>>v;
  for(int i=1;i<=v;i++) 
  { 
   res=res*s;
  } 
  cout<<"Your Result!! "<<res;
  return 0;
 }
