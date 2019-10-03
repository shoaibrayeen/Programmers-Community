#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int bas,powe;
	int output = calculate( bas, powe);
    cout<<output;
}

 int calculate(int base, int power);
 int calculate(int base, int power)
 {   int base,power;
    cout<<"enter the values of base and power";
    cin>>base>>power;
    
    int total = 1;
 	  for(int i = 0;i<power;i++)
 	  {
 	  		total = total*base;
      }
 return total;
 }
