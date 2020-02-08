/*
  A positive number N is given to you and You need to check Whether a Number is Even or Odd.
  You can't use % operator
*/
#include<iostream>
using namespace std;

bool check_For_Even(int);

int main()
{
    int num;
    bool check;
    cout<<"Enter a number ";
    cin>>num;

    check=check_For_Even(num);
    if(check==1)
          cout<<"\nEVEN";
    else
          cout<<"\nODD";
}
bool check_For_Even(int n)
{
    if(n == ( (n/2) * 2 ) )
        return 1;
    else
        return 0;
}

