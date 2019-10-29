#include<iostream>
using namespace std;
int main()
{
          int year;
          cout<<"ENter Year to check :- ";
          cin>>year;
          if(year%400==0 or year%4==0)
          cout<<"Yes";
          else
          cout<<"No";
}
