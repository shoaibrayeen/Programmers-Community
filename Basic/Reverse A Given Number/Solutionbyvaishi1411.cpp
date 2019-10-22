#include<iostream>
using namespace std; 
int reverse(int);
int main()
{ 
int shi;
cout<<"Enter a number:"; 
cin>>shi; 
if(shi<0 )
cout<<"You entered negitive integer!!";
else
cout<<"Reverse of number is: "<<reverse(shi);
return 0;
}
int reverse(int shi)
{ int rev=0; 
while(shi>0)
{ 
rev=rev*10+shi%10;
shi=shi/10;
}
return rev; 
}
