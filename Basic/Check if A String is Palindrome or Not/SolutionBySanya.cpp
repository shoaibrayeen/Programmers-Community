#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int num,onum,dig,rev=0;
    cout<<"Enter a positive number : ";
    cin>>num;
    onum = num;
    do
    {
        dig = num % 10;
        rev = (rev * 10) + dig;
        num = num / 10;
    } while (num != 0);
    if(onum == rev)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
