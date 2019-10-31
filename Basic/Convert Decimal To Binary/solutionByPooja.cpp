/*
    Write a program to convert a decimal number into a binary number.
*/
#include<iostream>
#include<vector>
using namespace std;

void decimal_to_binary(int num)
{
    vector <int>v1;

    if(num==0)
          cout<<num;
    while(num>0)
    {
          v1.push_back(num%2);
          num/=2;
    }
    for(int i=v1.size()-1;i>=0;i--)
          cout<<v1[i];
}

int main()
{
    int n;
    cout<<"Enter a decimal number ";
    cin>>n;

    cout<<"Binary equivlaent of "<<n<<" is: ";
    decimal_to_binary(n);
}
