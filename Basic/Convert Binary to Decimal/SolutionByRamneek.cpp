#include<iostream>

using namespace std;

int BinaryToDecimal(int n)
{

    int i,l,temp=0,num=1,prod=0;
    while(n>=1)
    {

      l=n%10;
      n=n/10;
      prod=l*num;
      temp=temp+prod;

      num=num*2;
    }
return temp;
}

int main()
{
    int x;
    cout<<"Enter Binary number\n";
    cin>>x;
    cout<<"Corresponding digital number = "<<BinaryToDecimal(x);

return 0;
}
