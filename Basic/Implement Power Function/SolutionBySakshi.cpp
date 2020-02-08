#include<iostream>
using namespace std;
float powerCalculate(int num,int pow)
{
	if (pow == 0)
	{
	    return 1;
	}
	//for negative        
	if (pow < 0)
	{
	    return 1/powerCalculate(num,-pow);
	}
	        
	if (pow%2 == 0)  
	{
	    return powerCalculate(num, pow/2)*powerCalculate(num, pow/2);
	}
	else  
	{
	   return num*powerCalculate(num, (pow-1)/2)*powerCalculate(num,(pow-1)/2);
	}
  
}
int main()
{
    
    int num, power;
    cout<<"enter the number\n";
    cin>>num;
    cout<<"enter the power\n";
    cin>>power;
    float result=powerCalculate(num,power);
    cout<<"the result  of "<<num<<" raised to "<<power <<" is "<<result;
}
