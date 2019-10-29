// 0 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;

int Fibb(int n)
{
 int f=0,s=1,t=0;

 while(n>1)
 {
 	t=f+s;
 	f=s;
 	s=t;

 	n--;

 }

 return t;

}
int main()
{
	int n;
	cout<<"\n Enter the Number ";
	cin>>n;

	int k=Fibb(n-1);

	cout<<k;
}
