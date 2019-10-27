//leap year calculation
#include<iostream>
using namespace std;

//function prototype 
int leapyr(int );

//driver code
int main()
{ 
  int y, res;
  cout<<"Enter the year : ";
  cin>>y; 
  res= leapyr(y);
    if(res==1)
      cout<<y<<"is a leap year!!!";
     else 
       cout<<y<<"is not a leap year!!!";
  return 0;
} 
//function defination 
int leapyr(int y)
{ 
 if((y!=2000 && y!=1900) && (y%4==0||y%100==0||y%400==0))
   return 1;
 else 
 return 0;

}
