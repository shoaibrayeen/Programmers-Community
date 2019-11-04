#include<iostream>
using namespace std;
int main()
{
          int year;
          cout<<"ENter Year to check :- ";
          cin>>year;
          if(year%400==0)
          cout<<"Yes";
          else if(year%100==0)
          cout<<"No";
          else if(year%4==0)
          cout<<"Yes";
          else
          cout<<"No";
}
