/*
    A number is given and you need to check if it's a power of two or not.
*/
#include<iostream>
#include<cmath>
using namespace std;

bool check_for_power(int num)
{
     if(num%2==0 ||num==1)
     {
         for(int i=0;i<=sqrt(num)+1;i++)
             if((int)(pow(2,i)+0.5)== num)
                   return 1;
     }
     return 0;


}


int main()
{
     int  num;
     bool flag;
     cout<<"Enter a number ";
     cin>>num;

     flag=check_for_power(num);


     if(flag==1)
            cout<<"YES";
     else
            cout<<"NO";
}
