#include<iostream>
using namespace std;
int fact_l(int);
main()
{ 
int num,fact;
cout<<"Enter the number whose factorial is to be determined:";
cin>>num;
fact=fact_l(num);
cout<<"Factorial is: "<<fact;
} 
int fact_l(int num)
{ 
if (num== 0) 
	return 1; 
	return num * fact_l(num - 1); 
}
