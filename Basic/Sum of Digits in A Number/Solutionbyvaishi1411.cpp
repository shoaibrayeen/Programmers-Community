#include<iostream>
using namespace std; 
int Sum_of_digits(int);
int main()
{ 
int shi,sum=0;
cout<<"Enter a number:"; 
cin>>shi;
sum=Sum_of_digits(shi); 
if(sum<0 )
cout<<"You entered negitive integer!!";
else
cout<<"Sum of digits of "<<shi<<" = "<<sum;
return 0;
}
int Sum_of_digits(int shi)
{ int v=-1; 
if(shi>0)
{
for (v=0;shi>0;v+= shi % 10,shi/= 10);  
}
return v; 
}
