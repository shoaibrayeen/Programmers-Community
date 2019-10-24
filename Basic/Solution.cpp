#include<iostream>
using namespace std;
int main()
{
int no,a=0;
cin>>no;
if(no==0)
    {
     printf("1");
    }
while(no>0)
{
no=no/10;
a++;
}
cout<<"Output = "<<a;
return 0;
}
